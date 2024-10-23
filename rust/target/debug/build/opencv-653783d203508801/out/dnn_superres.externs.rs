extern "C" {
	pub fn cv_dnn_superres_DnnSuperResImpl_create() -> Result<*mut c_void>;
	pub fn cv_dnn_superres_DnnSuperResImpl_DnnSuperResImpl() -> Result<*mut c_void>;
	pub fn cv_dnn_superres_DnnSuperResImpl_DnnSuperResImpl_const_StringR_int(algo: *const c_char, scale: i32) -> Result<*mut c_void>;
	pub fn cv_dnn_superres_DnnSuperResImpl_readModel_const_StringR(instance: *mut c_void, path: *const c_char) -> Result_void;
	pub fn cv_dnn_superres_DnnSuperResImpl_readModel_const_StringR_const_StringR(instance: *mut c_void, weights: *const c_char, definition: *const c_char) -> Result_void;
	pub fn cv_dnn_superres_DnnSuperResImpl_setModel_const_StringR_int(instance: *mut c_void, algo: *const c_char, scale: i32) -> Result_void;
	pub fn cv_dnn_superres_DnnSuperResImpl_setPreferableBackend_int(instance: *mut c_void, backend_id: i32) -> Result_void;
	pub fn cv_dnn_superres_DnnSuperResImpl_setPreferableTarget_int(instance: *mut c_void, target_id: i32) -> Result_void;
	pub fn cv_dnn_superres_DnnSuperResImpl_upsample_const__InputArrayR_const__OutputArrayR(instance: *mut c_void, img: *const c_void, result: *const c_void) -> Result_void;
	pub fn cv_dnn_superres_DnnSuperResImpl_upsampleMultioutput_const__InputArrayR_vector_Mat_R_const_vector_int_R_const_vector_String_R(instance: *mut c_void, img: *const c_void, imgs_new: *mut c_void, scale_factors: *const c_void, node_names: *const c_void) -> Result_void;
	pub fn cv_dnn_superres_DnnSuperResImpl_getScale(instance: *mut c_void) -> Result<i32>;
	pub fn cv_dnn_superres_DnnSuperResImpl_getAlgorithm(instance: *mut c_void) -> Result<*mut c_void>;
}
