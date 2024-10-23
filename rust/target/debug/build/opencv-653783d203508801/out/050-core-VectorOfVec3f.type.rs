pub type VectorOfVec3f = core::Vector<core::Vec3f>;

impl VectorOfVec3f {
	pub fn as_raw_VectorOfVec3f(&self) -> *const c_void { self.as_raw() }
	pub fn as_raw_mut_VectorOfVec3f(&mut self) -> *mut c_void { self.as_raw_mut() }
}

vector_extern! { core::Vec3f, *const c_void, *mut c_void,
	cv_VectorOfVec3f_new, cv_VectorOfVec3f_delete,
	cv_VectorOfVec3f_len, cv_VectorOfVec3f_is_empty,
	cv_VectorOfVec3f_capacity, cv_VectorOfVec3f_shrink_to_fit,
	cv_VectorOfVec3f_reserve, cv_VectorOfVec3f_remove,
	cv_VectorOfVec3f_swap, cv_VectorOfVec3f_clear,
	cv_VectorOfVec3f_get, cv_VectorOfVec3f_set,
	cv_VectorOfVec3f_push, cv_VectorOfVec3f_insert,
}
vector_copy_non_bool! { core::Vec3f, *const c_void, *mut c_void,
	cv_VectorOfVec3f_data, cv_VectorOfVec3f_data_mut, cv_VectorOfVec3f_from_slice,
	cv_VectorOfVec3f_clone,
}

unsafe impl Send for core::Vector<core::Vec3f> {}

impl core::ToInputArray for VectorOfVec3f {
	#[inline]
	fn input_array(&self) -> Result<core::_InputArray> {
		extern "C" { fn cv_VectorOfVec3f_input_array(instance: *const c_void) -> sys::Result<*mut c_void>; }
		unsafe { cv_VectorOfVec3f_input_array(self.as_raw_VectorOfVec3f()) }
			.into_result()
			.map(|ptr| unsafe { core::_InputArray::from_raw(ptr) } )
	}
}

impl core::ToOutputArray for VectorOfVec3f {
	#[inline]
	fn output_array(&mut self) -> Result<core::_OutputArray> {
		extern "C" { fn cv_VectorOfVec3f_output_array(instance: *mut c_void) -> sys::Result<*mut c_void>; }
		unsafe { cv_VectorOfVec3f_output_array(self.as_raw_mut_VectorOfVec3f()) }
			.into_result()
			.map(|ptr| unsafe { core::_OutputArray::from_raw(ptr) })
	}
}

impl core::ToInputOutputArray for VectorOfVec3f {
	#[inline]
	fn input_output_array(&mut self) -> Result<core::_InputOutputArray> {
		extern "C" { fn cv_VectorOfVec3f_input_output_array(instance: *mut c_void) -> sys::Result<*mut c_void>; }
		unsafe { cv_VectorOfVec3f_input_output_array(self.as_raw_mut_VectorOfVec3f()) }
			.into_result()
			.map(|ptr| unsafe { core::_InputOutputArray::from_raw(ptr) })
	}
}

input_output_array_ref_forward! { VectorOfVec3f }

