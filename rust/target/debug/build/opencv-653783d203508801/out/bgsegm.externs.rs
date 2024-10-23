extern "C" {
	pub fn cv_bgsegm_createBackgroundSubtractorCNT_int_bool_int_bool(min_pixel_stability: i32, use_history: bool, max_pixel_stability: i32, is_parallel: bool) -> Result<*mut c_void>;
	pub fn cv_bgsegm_createBackgroundSubtractorGMG_int_double(initialization_frames: i32, decision_threshold: f64) -> Result<*mut c_void>;
	pub fn cv_bgsegm_createBackgroundSubtractorGSOC_int_int_float_float_int_float_float_float_float_float_float(mc: i32, n_samples: i32, replace_rate: f32, propagation_rate: f32, hits_threshold: i32, alpha: f32, beta: f32, blinking_supression_decay: f32, blinking_supression_multiplier: f32, noise_removal_threshold_fac_bg: f32, noise_removal_threshold_fac_fg: f32) -> Result<*mut c_void>;
	pub fn cv_bgsegm_createBackgroundSubtractorLSBP_int_int_int_float_float_float_float_float_float_float_float_int_int(mc: i32, n_samples: i32, lsbp_radius: i32, tlower: f32, tupper: f32, tinc: f32, tdec: f32, rscale: f32, rincdec: f32, noise_removal_threshold_fac_bg: f32, noise_removal_threshold_fac_fg: f32, lsb_pthreshold: i32, min_count: i32) -> Result<*mut c_void>;
	pub fn cv_bgsegm_createBackgroundSubtractorMOG_int_int_double_double(history: i32, nmixtures: i32, background_ratio: f64, noise_sigma: f64) -> Result<*mut c_void>;
	pub fn cv_bgsegm_createSyntheticSequenceGenerator_const__InputArrayR_const__InputArrayR_double_double_double_double(background: *const c_void, object: *const c_void, amplitude: f64, wavelength: f64, wavespeed: f64, objspeed: f64) -> Result<*mut c_void>;
	pub fn cv_bgsegm_BackgroundSubtractorCNT_apply_const__InputArrayR_const__OutputArrayR_double(instance: *mut c_void, image: *const c_void, fgmask: *const c_void, learning_rate: f64) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorCNT_getBackgroundImage_const_const__OutputArrayR(instance: *const c_void, background_image: *const c_void) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorCNT_getMinPixelStability_const(instance: *const c_void) -> Result<i32>;
	pub fn cv_bgsegm_BackgroundSubtractorCNT_setMinPixelStability_int(instance: *mut c_void, value: i32) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorCNT_getMaxPixelStability_const(instance: *const c_void) -> Result<i32>;
	pub fn cv_bgsegm_BackgroundSubtractorCNT_setMaxPixelStability_int(instance: *mut c_void, value: i32) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorCNT_getUseHistory_const(instance: *const c_void) -> Result<bool>;
	pub fn cv_bgsegm_BackgroundSubtractorCNT_setUseHistory_bool(instance: *mut c_void, value: bool) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorCNT_getIsParallel_const(instance: *const c_void) -> Result<bool>;
	pub fn cv_bgsegm_BackgroundSubtractorCNT_setIsParallel_bool(instance: *mut c_void, value: bool) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_getMaxFeatures_const(instance: *const c_void) -> Result<i32>;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_setMaxFeatures_int(instance: *mut c_void, max_features: i32) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_getDefaultLearningRate_const(instance: *const c_void) -> Result<f64>;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_setDefaultLearningRate_double(instance: *mut c_void, lr: f64) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_getNumFrames_const(instance: *const c_void) -> Result<i32>;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_setNumFrames_int(instance: *mut c_void, nframes: i32) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_getQuantizationLevels_const(instance: *const c_void) -> Result<i32>;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_setQuantizationLevels_int(instance: *mut c_void, nlevels: i32) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_getBackgroundPrior_const(instance: *const c_void) -> Result<f64>;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_setBackgroundPrior_double(instance: *mut c_void, bgprior: f64) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_getSmoothingRadius_const(instance: *const c_void) -> Result<i32>;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_setSmoothingRadius_int(instance: *mut c_void, radius: i32) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_getDecisionThreshold_const(instance: *const c_void) -> Result<f64>;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_setDecisionThreshold_double(instance: *mut c_void, thresh: f64) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_getUpdateBackgroundModel_const(instance: *const c_void) -> Result<bool>;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_setUpdateBackgroundModel_bool(instance: *mut c_void, update: bool) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_getMinVal_const(instance: *const c_void) -> Result<f64>;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_setMinVal_double(instance: *mut c_void, val: f64) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_getMaxVal_const(instance: *const c_void) -> Result<f64>;
	pub fn cv_bgsegm_BackgroundSubtractorGMG_setMaxVal_double(instance: *mut c_void, val: f64) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorGSOC_apply_const__InputArrayR_const__OutputArrayR_double(instance: *mut c_void, image: *const c_void, fgmask: *const c_void, learning_rate: f64) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorGSOC_getBackgroundImage_const_const__OutputArrayR(instance: *const c_void, background_image: *const c_void) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorLSBP_apply_const__InputArrayR_const__OutputArrayR_double(instance: *mut c_void, image: *const c_void, fgmask: *const c_void, learning_rate: f64) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorLSBP_getBackgroundImage_const_const__OutputArrayR(instance: *const c_void, background_image: *const c_void) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorLSBPDesc_calcLocalSVDValues_const__OutputArrayR_const_MatR(local_svd_values: *const c_void, frame: *const c_void) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorLSBPDesc_computeFromLocalSVDValues_const__OutputArrayR_const_MatR_const_Point2iX(desc: *const c_void, local_svd_values: *const c_void, lsbp_sample_points: *const core::Point2i) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorLSBPDesc_compute_const__OutputArrayR_const_MatR_const_Point2iX(desc: *const c_void, frame: *const c_void, lsbp_sample_points: *const core::Point2i) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorMOG_getHistory_const(instance: *const c_void) -> Result<i32>;
	pub fn cv_bgsegm_BackgroundSubtractorMOG_setHistory_int(instance: *mut c_void, nframes: i32) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorMOG_getNMixtures_const(instance: *const c_void) -> Result<i32>;
	pub fn cv_bgsegm_BackgroundSubtractorMOG_setNMixtures_int(instance: *mut c_void, nmix: i32) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorMOG_getBackgroundRatio_const(instance: *const c_void) -> Result<f64>;
	pub fn cv_bgsegm_BackgroundSubtractorMOG_setBackgroundRatio_double(instance: *mut c_void, background_ratio: f64) -> Result_void;
	pub fn cv_bgsegm_BackgroundSubtractorMOG_getNoiseSigma_const(instance: *const c_void) -> Result<f64>;
	pub fn cv_bgsegm_BackgroundSubtractorMOG_setNoiseSigma_double(instance: *mut c_void, noise_sigma: f64) -> Result_void;
	pub fn cv_bgsegm_SyntheticSequenceGenerator_SyntheticSequenceGenerator_const__InputArrayR_const__InputArrayR_double_double_double_double(background: *const c_void, object: *const c_void, amplitude: f64, wavelength: f64, wavespeed: f64, objspeed: f64) -> Result<*mut c_void>;
	pub fn cv_bgsegm_SyntheticSequenceGenerator_getNextFrame_const__OutputArrayR_const__OutputArrayR(instance: *mut c_void, frame: *const c_void, gt_mask: *const c_void) -> Result_void;
}
