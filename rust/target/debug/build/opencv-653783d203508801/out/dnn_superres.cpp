#include "ocvrs_common.hpp"
#include <opencv2/dnn_superres.hpp>
#include "dnn_superres_types.hpp"

extern "C" {
	void cv_DnnSuperResImpl_delete(cv::dnn_superres::DnnSuperResImpl* instance) {
		delete instance;
	}
	Result<cv::Ptr<cv::dnn_superres::DnnSuperResImpl>*> cv_dnn_superres_DnnSuperResImpl_create() {
		try {
			cv::Ptr<cv::dnn_superres::DnnSuperResImpl> ret = cv::dnn_superres::DnnSuperResImpl::create();
			return Ok(new cv::Ptr<cv::dnn_superres::DnnSuperResImpl>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::dnn_superres::DnnSuperResImpl>*>))
	}
	
	Result<cv::dnn_superres::DnnSuperResImpl*> cv_dnn_superres_DnnSuperResImpl_DnnSuperResImpl() {
		try {
			cv::dnn_superres::DnnSuperResImpl* ret = new cv::dnn_superres::DnnSuperResImpl();
			return Ok<cv::dnn_superres::DnnSuperResImpl*>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::dnn_superres::DnnSuperResImpl*>))
	}
	
	Result<cv::dnn_superres::DnnSuperResImpl*> cv_dnn_superres_DnnSuperResImpl_DnnSuperResImpl_const_StringR_int(const char* algo, int scale) {
		try {
			cv::dnn_superres::DnnSuperResImpl* ret = new cv::dnn_superres::DnnSuperResImpl(std::string(algo), scale);
			return Ok<cv::dnn_superres::DnnSuperResImpl*>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::dnn_superres::DnnSuperResImpl*>))
	}
	
	Result_void cv_dnn_superres_DnnSuperResImpl_readModel_const_StringR(cv::dnn_superres::DnnSuperResImpl* instance, const char* path) {
		try {
			instance->readModel(std::string(path));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_dnn_superres_DnnSuperResImpl_readModel_const_StringR_const_StringR(cv::dnn_superres::DnnSuperResImpl* instance, const char* weights, const char* definition) {
		try {
			instance->readModel(std::string(weights), std::string(definition));
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_dnn_superres_DnnSuperResImpl_setModel_const_StringR_int(cv::dnn_superres::DnnSuperResImpl* instance, const char* algo, int scale) {
		try {
			instance->setModel(std::string(algo), scale);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_dnn_superres_DnnSuperResImpl_setPreferableBackend_int(cv::dnn_superres::DnnSuperResImpl* instance, int backendId) {
		try {
			instance->setPreferableBackend(backendId);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_dnn_superres_DnnSuperResImpl_setPreferableTarget_int(cv::dnn_superres::DnnSuperResImpl* instance, int targetId) {
		try {
			instance->setPreferableTarget(targetId);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_dnn_superres_DnnSuperResImpl_upsample_const__InputArrayR_const__OutputArrayR(cv::dnn_superres::DnnSuperResImpl* instance, const cv::_InputArray* img, const cv::_OutputArray* result) {
		try {
			instance->upsample(*img, *result);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_dnn_superres_DnnSuperResImpl_upsampleMultioutput_const__InputArrayR_vector_Mat_R_const_vector_int_R_const_vector_String_R(cv::dnn_superres::DnnSuperResImpl* instance, const cv::_InputArray* img, std::vector<cv::Mat>* imgs_new, const std::vector<int>* scale_factors, const std::vector<cv::String>* node_names) {
		try {
			instance->upsampleMultioutput(*img, *imgs_new, *scale_factors, *node_names);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<int> cv_dnn_superres_DnnSuperResImpl_getScale(cv::dnn_superres::DnnSuperResImpl* instance) {
		try {
			int ret = instance->getScale();
			return Ok<int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<int>))
	}
	
	Result<void*> cv_dnn_superres_DnnSuperResImpl_getAlgorithm(cv::dnn_superres::DnnSuperResImpl* instance) {
		try {
			cv::String ret = instance->getAlgorithm();
			return Ok(ocvrs_create_string(ret.c_str()));
		} OCVRS_CATCH(OCVRS_TYPE(Result<void*>))
	}
	
}
