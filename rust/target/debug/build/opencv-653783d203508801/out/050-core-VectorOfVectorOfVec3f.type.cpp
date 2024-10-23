extern "C" {
	void cv_VectorOfVectorOfVec3f_delete(std::vector<std::vector<cv::Vec3f>>* instance) {
		delete instance;
	}

	std::vector<std::vector<cv::Vec3f>>* cv_VectorOfVectorOfVec3f_new() {
		return new std::vector<std::vector<cv::Vec3f>>();
	}

	size_t cv_VectorOfVectorOfVec3f_len(const std::vector<std::vector<cv::Vec3f>>* instance) {
		return instance->size();
	}

	bool cv_VectorOfVectorOfVec3f_is_empty(const std::vector<std::vector<cv::Vec3f>>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfVectorOfVec3f_capacity(const std::vector<std::vector<cv::Vec3f>>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfVectorOfVec3f_shrink_to_fit(std::vector<std::vector<cv::Vec3f>>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfVectorOfVec3f_reserve(std::vector<std::vector<cv::Vec3f>>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfVectorOfVec3f_remove(std::vector<std::vector<cv::Vec3f>>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfVectorOfVec3f_swap(std::vector<std::vector<cv::Vec3f>>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfVectorOfVec3f_clear(std::vector<std::vector<cv::Vec3f>>* instance) {
		instance->clear();
	}

	void cv_VectorOfVectorOfVec3f_push(std::vector<std::vector<cv::Vec3f>>* instance, std::vector<cv::Vec3f>* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfVectorOfVec3f_insert(std::vector<std::vector<cv::Vec3f>>* instance, size_t index, std::vector<cv::Vec3f>* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<std::vector<cv::Vec3f>*> cv_VectorOfVectorOfVec3f_get(const std::vector<std::vector<cv::Vec3f>>* instance, size_t index) {
		return Ok<std::vector<cv::Vec3f>*>(new std::vector<cv::Vec3f>((*instance)[index]));
	}

	void cv_VectorOfVectorOfVec3f_set(std::vector<std::vector<cv::Vec3f>>* instance, size_t index, std::vector<cv::Vec3f>* val) {
		(*instance)[index] = *val;
	}

	Result<cv::_InputArray*> cv_VectorOfVectorOfVec3f_input_array(std::vector<std::vector<cv::Vec3f>>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfVectorOfVec3f_output_array(std::vector<std::vector<cv::Vec3f>>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfVectorOfVec3f_input_output_array(std::vector<std::vector<cv::Vec3f>>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


