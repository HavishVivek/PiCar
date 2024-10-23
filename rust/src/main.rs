use gpio_cdev::{Chip, LineRequestFlags};
use std::fs;
use std::time::{Duration};

const GPIO6: u32 = 6;
const PERIOD_US: u64 = 20000; // 20 ms period
const PULSE_0_DEG_US: u64 = 1000;  // Pulse width for 0° position (1 ms)
const PULSE_90_DEG_US: u64 = 1500; // Pulse width for 90° position (1.5 ms)

fn main() -> Result<(), Box<dyn std::error::Error>> {
    // Setup GPIO
    let mut chip = Chip::new("/dev/gpiochip0")?;
    let line = chip.get_line(GPIO6)?;
    let line = line.request(LineRequestFlags::OUTPUT, 0, "pwm")?;

    loop {
        // Read the detection result from the file
        let detection_status = fs::read_to_string("detection_status.txt")?.trim().to_string();

        if detection_status == "1" {
            println!("Wall detected, moving servo to 90°");
            move_servo(&line, PULSE_90_DEG_US)?;
        } else {
            println!("No wall detected, moving servo to 0°");
            move_servo(&line, PULSE_0_DEG_US)?;
        }

        // Check every 100 ms
        std::thread::sleep(Duration::from_millis(100));
    }
}

// Function to move the servo to the desired position
fn move_servo(line: &gpio_cdev::LineHandle, pulse_width_us: u64) -> Result<(), gpio_cdev::Error> {
    for _ in 0..20 {
        // Set GPIO to high (start pulse)
        line.set_value(1)?;
        std::thread::sleep(Duration::from_micros(pulse_width_us));

        // Set GPIO to low (end pulse)
        line.set_value(0)?;
        std::thread::sleep(Duration::from_micros(PERIOD_US - pulse_width_us));
    }
    Ok(())
}