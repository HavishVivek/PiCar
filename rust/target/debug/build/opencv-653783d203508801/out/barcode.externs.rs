extern "C" {
	pub fn cv_barcode_BarcodeDetector_BarcodeDetector_const_stringR_const_stringR(prototxt_path: *const c_char, model_path: *const c_char) -> Result<*mut c_void>;
	pub fn cv_barcode_BarcodeDetector_detect_const_const__InputArrayR_const__OutputArrayR(instance: *const c_void, img: *const c_void, points: *const c_void) -> Result<bool>;
	pub fn cv_barcode_BarcodeDetector_decode_const_const__InputArrayR_const__InputArrayR_vector_string_R_vector_BarcodeType_R(instance: *const c_void, img: *const c_void, points: *const c_void, decoded_info: *mut c_void, decoded_type: *mut c_void) -> Result<bool>;
	pub fn cv_barcode_BarcodeDetector_detectAndDecode_const_const__InputArrayR_vector_string_R_vector_BarcodeType_R_const__OutputArrayR(instance: *const c_void, img: *const c_void, decoded_info: *mut c_void, decoded_type: *mut c_void, points: *const c_void) -> Result<bool>;
}
