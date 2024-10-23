extern "C" {
	void cv_VectorOfPoint_delete(std::vector<cv::Point>* instance) {
		delete instance;
	}

	std::vector<cv::Point>* cv_VectorOfPoint_new() {
		return new std::vector<cv::Point>();
	}

	size_t cv_VectorOfPoint_len(const std::vector<cv::Point>* instance) {
		return instance->size();
	}

	bool cv_VectorOfPoint_is_empty(const std::vector<cv::Point>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfPoint_capacity(const std::vector<cv::Point>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfPoint_shrink_to_fit(std::vector<cv::Point>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfPoint_reserve(std::vector<cv::Point>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfPoint_remove(std::vector<cv::Point>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfPoint_swap(std::vector<cv::Point>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfPoint_clear(std::vector<cv::Point>* instance) {
		instance->clear();
	}

	void cv_VectorOfPoint_push(std::vector<cv::Point>* instance, cv::Point* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfPoint_insert(std::vector<cv::Point>* instance, size_t index, cv::Point* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::Point> cv_VectorOfPoint_get(const std::vector<cv::Point>* instance, size_t index) {
		return Ok<cv::Point>((*instance)[index]);
	}

	void cv_VectorOfPoint_set(std::vector<cv::Point>* instance, size_t index, cv::Point* val) {
		(*instance)[index] = *val;
	}

	const cv::Point* cv_VectorOfPoint_data(const std::vector<cv::Point>* instance) {
		return instance->data();
	}
	
	cv::Point* cv_VectorOfPoint_data_mut(std::vector<cv::Point>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Point>* cv_VectorOfPoint_clone(const std::vector<cv::Point>* instance) {
		return new std::vector<cv::Point>(*instance);
	}
	
	std::vector<cv::Point>* cv_VectorOfPoint_from_slice(const cv::Point* data, size_t len) {
		return new std::vector<cv::Point>(data, data + len);
	}
	Result<cv::_InputArray*> cv_VectorOfPoint_input_array(std::vector<cv::Point>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfPoint_output_array(std::vector<cv::Point>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfPoint_input_output_array(std::vector<cv::Point>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


