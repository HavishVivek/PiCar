extern "C" {
	pub fn cvv_impl_debugDMatch_const__InputArrayR_vector_KeyPoint__const__InputArrayR_vector_KeyPoint__vector_DMatch__const_CallMetaDataR_const_charX_const_charX_bool(img1: *const c_void, keypoints1: *mut c_void, img2: *const c_void, keypoints2: *mut c_void, matches: *mut c_void, data: *const c_void, description: *const c_char, view: *const c_char, use_train_descriptor: bool) -> Result_void;
	pub fn cvv_impl_debugFilter_const__InputArrayR_const__InputArrayR_const_CallMetaDataR_const_charX_const_charX(original: *const c_void, result: *const c_void, data: *const c_void, description: *const c_char, view: *const c_char) -> Result_void;
	pub fn cvv_impl_finalShow() -> Result_void;
	pub fn cvv_impl_showImage_const__InputArrayR_const_CallMetaDataR_const_charX_const_charX(img: *const c_void, data: *const c_void, description: *const c_char, view: *const c_char) -> Result_void;
	pub fn cvv_impl_CallMetaData_getPropFile_const(instance: *const c_void) -> *mut c_void;
	pub fn cvv_impl_CallMetaData_getPropLine_const(instance: *const c_void) -> size_t;
	pub fn cvv_impl_CallMetaData_getPropFunction_const(instance: *const c_void) -> *mut c_void;
	pub fn cvv_impl_CallMetaData_getPropIsKnown_const(instance: *const c_void) -> bool;
	pub fn cvv_impl_CallMetaData_CallMetaData() -> Result<*mut c_void>;
	pub fn cvv_impl_CallMetaData_CallMetaData_const_charX_size_t_const_charX(file: *const c_char, line: size_t, function: *const c_char) -> Result<*mut c_void>;
	pub fn cvv_impl_CallMetaData_operator_bool(instance: *mut c_void) -> Result<bool>;
}
