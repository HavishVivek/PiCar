extern "C" {
	void cv_VectorOfRect2d_delete(std::vector<cv::Rect2d>* instance) {
		delete instance;
	}

	std::vector<cv::Rect2d>* cv_VectorOfRect2d_new() {
		return new std::vector<cv::Rect2d>();
	}

	size_t cv_VectorOfRect2d_len(const std::vector<cv::Rect2d>* instance) {
		return instance->size();
	}

	bool cv_VectorOfRect2d_is_empty(const std::vector<cv::Rect2d>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfRect2d_capacity(const std::vector<cv::Rect2d>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfRect2d_shrink_to_fit(std::vector<cv::Rect2d>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfRect2d_reserve(std::vector<cv::Rect2d>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfRect2d_remove(std::vector<cv::Rect2d>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfRect2d_swap(std::vector<cv::Rect2d>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfRect2d_clear(std::vector<cv::Rect2d>* instance) {
		instance->clear();
	}

	void cv_VectorOfRect2d_push(std::vector<cv::Rect2d>* instance, cv::Rect2d* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfRect2d_insert(std::vector<cv::Rect2d>* instance, size_t index, cv::Rect2d* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::Rect2d> cv_VectorOfRect2d_get(const std::vector<cv::Rect2d>* instance, size_t index) {
		return Ok<cv::Rect2d>((*instance)[index]);
	}

	void cv_VectorOfRect2d_set(std::vector<cv::Rect2d>* instance, size_t index, cv::Rect2d* val) {
		(*instance)[index] = *val;
	}

	const cv::Rect2d* cv_VectorOfRect2d_data(const std::vector<cv::Rect2d>* instance) {
		return instance->data();
	}
	
	cv::Rect2d* cv_VectorOfRect2d_data_mut(std::vector<cv::Rect2d>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Rect2d>* cv_VectorOfRect2d_clone(const std::vector<cv::Rect2d>* instance) {
		return new std::vector<cv::Rect2d>(*instance);
	}
	
	std::vector<cv::Rect2d>* cv_VectorOfRect2d_from_slice(const cv::Rect2d* data, size_t len) {
		return new std::vector<cv::Rect2d>(data, data + len);
	}
	Result<cv::_InputArray*> cv_VectorOfRect2d_input_array(std::vector<cv::Rect2d>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfRect2d_output_array(std::vector<cv::Rect2d>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfRect2d_input_output_array(std::vector<cv::Rect2d>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


