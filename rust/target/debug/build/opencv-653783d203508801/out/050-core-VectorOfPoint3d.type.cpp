extern "C" {
	void cv_VectorOfPoint3d_delete(std::vector<cv::Point3d>* instance) {
		delete instance;
	}

	std::vector<cv::Point3d>* cv_VectorOfPoint3d_new() {
		return new std::vector<cv::Point3d>();
	}

	size_t cv_VectorOfPoint3d_len(const std::vector<cv::Point3d>* instance) {
		return instance->size();
	}

	bool cv_VectorOfPoint3d_is_empty(const std::vector<cv::Point3d>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfPoint3d_capacity(const std::vector<cv::Point3d>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfPoint3d_shrink_to_fit(std::vector<cv::Point3d>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfPoint3d_reserve(std::vector<cv::Point3d>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfPoint3d_remove(std::vector<cv::Point3d>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfPoint3d_swap(std::vector<cv::Point3d>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfPoint3d_clear(std::vector<cv::Point3d>* instance) {
		instance->clear();
	}

	void cv_VectorOfPoint3d_push(std::vector<cv::Point3d>* instance, cv::Point3d* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfPoint3d_insert(std::vector<cv::Point3d>* instance, size_t index, cv::Point3d* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::Point3d> cv_VectorOfPoint3d_get(const std::vector<cv::Point3d>* instance, size_t index) {
		return Ok<cv::Point3d>((*instance)[index]);
	}

	void cv_VectorOfPoint3d_set(std::vector<cv::Point3d>* instance, size_t index, cv::Point3d* val) {
		(*instance)[index] = *val;
	}

	const cv::Point3d* cv_VectorOfPoint3d_data(const std::vector<cv::Point3d>* instance) {
		return instance->data();
	}
	
	cv::Point3d* cv_VectorOfPoint3d_data_mut(std::vector<cv::Point3d>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Point3d>* cv_VectorOfPoint3d_clone(const std::vector<cv::Point3d>* instance) {
		return new std::vector<cv::Point3d>(*instance);
	}
	
	std::vector<cv::Point3d>* cv_VectorOfPoint3d_from_slice(const cv::Point3d* data, size_t len) {
		return new std::vector<cv::Point3d>(data, data + len);
	}
	Result<cv::_InputArray*> cv_VectorOfPoint3d_input_array(std::vector<cv::Point3d>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfPoint3d_output_array(std::vector<cv::Point3d>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfPoint3d_input_output_array(std::vector<cv::Point3d>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


