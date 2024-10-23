extern "C" {
	pub fn cv_dpm_DPMDetector_isEmpty_const(instance: *const c_void) -> Result<bool>;
	pub fn cv_dpm_DPMDetector_detect_MatR_vector_ObjectDetection_R(instance: *mut c_void, image: *mut c_void, objects: *mut c_void) -> Result_void;
	pub fn cv_dpm_DPMDetector_getClassNames_const(instance: *const c_void) -> Result<*mut c_void>;
	pub fn cv_dpm_DPMDetector_getClassCount_const(instance: *const c_void) -> Result<size_t>;
	pub fn cv_dpm_DPMDetector_create_const_vector_string_R_const_vector_string_R(filenames: *const c_void, class_names: *const c_void) -> Result<*mut c_void>;
	pub fn cv_dpm_DPMDetector_ObjectDetection_getPropRect_const(instance: *const c_void) -> core::Rect;
	pub fn cv_dpm_DPMDetector_ObjectDetection_setPropRect_Rect(instance: *mut c_void, val: *const core::Rect);
	pub fn cv_dpm_DPMDetector_ObjectDetection_getPropScore_const(instance: *const c_void) -> f32;
	pub fn cv_dpm_DPMDetector_ObjectDetection_setPropScore_float(instance: *mut c_void, val: f32);
	pub fn cv_dpm_DPMDetector_ObjectDetection_getPropClassID_const(instance: *const c_void) -> i32;
	pub fn cv_dpm_DPMDetector_ObjectDetection_setPropClassID_int(instance: *mut c_void, val: i32);
	pub fn cv_dpm_DPMDetector_ObjectDetection_ObjectDetection() -> Result<*mut c_void>;
	pub fn cv_dpm_DPMDetector_ObjectDetection_ObjectDetection_const_RectR_float_int(rect: *const core::Rect, score: f32, class_id: i32) -> Result<*mut c_void>;
}
