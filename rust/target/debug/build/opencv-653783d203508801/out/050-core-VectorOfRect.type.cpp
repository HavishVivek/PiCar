extern "C" {
	void cv_VectorOfRect_delete(std::vector<cv::Rect>* instance) {
		delete instance;
	}

	std::vector<cv::Rect>* cv_VectorOfRect_new() {
		return new std::vector<cv::Rect>();
	}

	size_t cv_VectorOfRect_len(const std::vector<cv::Rect>* instance) {
		return instance->size();
	}

	bool cv_VectorOfRect_is_empty(const std::vector<cv::Rect>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfRect_capacity(const std::vector<cv::Rect>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfRect_shrink_to_fit(std::vector<cv::Rect>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfRect_reserve(std::vector<cv::Rect>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfRect_remove(std::vector<cv::Rect>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfRect_swap(std::vector<cv::Rect>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfRect_clear(std::vector<cv::Rect>* instance) {
		instance->clear();
	}

	void cv_VectorOfRect_push(std::vector<cv::Rect>* instance, cv::Rect* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfRect_insert(std::vector<cv::Rect>* instance, size_t index, cv::Rect* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::Rect> cv_VectorOfRect_get(const std::vector<cv::Rect>* instance, size_t index) {
		return Ok<cv::Rect>((*instance)[index]);
	}

	void cv_VectorOfRect_set(std::vector<cv::Rect>* instance, size_t index, cv::Rect* val) {
		(*instance)[index] = *val;
	}

	const cv::Rect* cv_VectorOfRect_data(const std::vector<cv::Rect>* instance) {
		return instance->data();
	}
	
	cv::Rect* cv_VectorOfRect_data_mut(std::vector<cv::Rect>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Rect>* cv_VectorOfRect_clone(const std::vector<cv::Rect>* instance) {
		return new std::vector<cv::Rect>(*instance);
	}
	
	std::vector<cv::Rect>* cv_VectorOfRect_from_slice(const cv::Rect* data, size_t len) {
		return new std::vector<cv::Rect>(data, data + len);
	}
	Result<cv::_InputArray*> cv_VectorOfRect_input_array(std::vector<cv::Rect>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfRect_output_array(std::vector<cv::Rect>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfRect_input_output_array(std::vector<cv::Rect>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


