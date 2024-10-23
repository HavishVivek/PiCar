extern "C" {
	void cv_VectorOfPoint2f_delete(std::vector<cv::Point2f>* instance) {
		delete instance;
	}

	std::vector<cv::Point2f>* cv_VectorOfPoint2f_new() {
		return new std::vector<cv::Point2f>();
	}

	size_t cv_VectorOfPoint2f_len(const std::vector<cv::Point2f>* instance) {
		return instance->size();
	}

	bool cv_VectorOfPoint2f_is_empty(const std::vector<cv::Point2f>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfPoint2f_capacity(const std::vector<cv::Point2f>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfPoint2f_shrink_to_fit(std::vector<cv::Point2f>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfPoint2f_reserve(std::vector<cv::Point2f>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfPoint2f_remove(std::vector<cv::Point2f>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfPoint2f_swap(std::vector<cv::Point2f>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfPoint2f_clear(std::vector<cv::Point2f>* instance) {
		instance->clear();
	}

	void cv_VectorOfPoint2f_push(std::vector<cv::Point2f>* instance, cv::Point2f* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfPoint2f_insert(std::vector<cv::Point2f>* instance, size_t index, cv::Point2f* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::Point2f> cv_VectorOfPoint2f_get(const std::vector<cv::Point2f>* instance, size_t index) {
		return Ok<cv::Point2f>((*instance)[index]);
	}

	void cv_VectorOfPoint2f_set(std::vector<cv::Point2f>* instance, size_t index, cv::Point2f* val) {
		(*instance)[index] = *val;
	}

	const cv::Point2f* cv_VectorOfPoint2f_data(const std::vector<cv::Point2f>* instance) {
		return instance->data();
	}
	
	cv::Point2f* cv_VectorOfPoint2f_data_mut(std::vector<cv::Point2f>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Point2f>* cv_VectorOfPoint2f_clone(const std::vector<cv::Point2f>* instance) {
		return new std::vector<cv::Point2f>(*instance);
	}
	
	std::vector<cv::Point2f>* cv_VectorOfPoint2f_from_slice(const cv::Point2f* data, size_t len) {
		return new std::vector<cv::Point2f>(data, data + len);
	}
	Result<cv::_InputArray*> cv_VectorOfPoint2f_input_array(std::vector<cv::Point2f>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfPoint2f_output_array(std::vector<cv::Point2f>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfPoint2f_input_output_array(std::vector<cv::Point2f>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


