pub type PtrOfGRULayer = core::Ptr<crate::dnn::GRULayer>;

ptr_extern! { crate::dnn::GRULayer,
	cv_PtrOfGRULayer_delete, cv_PtrOfGRULayer_get_inner_ptr, cv_PtrOfGRULayer_get_inner_ptr_mut
}

ptr_extern_ctor! { crate::dnn::GRULayer, cv_PtrOfGRULayer_new }

impl PtrOfGRULayer {
	#[inline] pub fn as_raw_PtrOfGRULayer(&self) -> *const c_void { self.as_raw() }
	#[inline] pub fn as_raw_mut_PtrOfGRULayer(&mut self) -> *mut c_void { self.as_raw_mut() }
}

impl crate::dnn::GRULayerTraitConst for PtrOfGRULayer {
	#[inline] fn as_raw_GRULayer(&self) -> *const c_void { self.inner_as_raw() }
}

impl crate::dnn::GRULayerTrait for PtrOfGRULayer {
	#[inline] fn as_raw_mut_GRULayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
}

impl core::AlgorithmTraitConst for PtrOfGRULayer {
	#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
}

impl core::AlgorithmTrait for PtrOfGRULayer {
	#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
}

impl crate::dnn::LayerTraitConst for PtrOfGRULayer {
	#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
}

impl crate::dnn::LayerTrait for PtrOfGRULayer {
	#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
}
