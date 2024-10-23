#include "ocvrs_common.hpp"
#include <opencv2/barcode.hpp>
#include "barcode_types.hpp"

extern "C" {
	void cv_BarcodeDetector_delete(cv::barcode::BarcodeDetector* instance) {
		delete instance;
	}
	Result<cv::barcode::BarcodeDetector*> cv_barcode_BarcodeDetector_BarcodeDetector_const_stringR_const_stringR(const char* prototxt_path, const char* model_path) {
		try {
			cv::barcode::BarcodeDetector* ret = new cv::barcode::BarcodeDetector(std::string(prototxt_path), std::string(model_path));
			return Ok<cv::barcode::BarcodeDetector*>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::barcode::BarcodeDetector*>))
	}
	
	Result<bool> cv_barcode_BarcodeDetector_detect_const_const__InputArrayR_const__OutputArrayR(const cv::barcode::BarcodeDetector* instance, const cv::_InputArray* img, const cv::_OutputArray* points) {
		try {
			bool ret = instance->detect(*img, *points);
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	Result<bool> cv_barcode_BarcodeDetector_decode_const_const__InputArrayR_const__InputArrayR_vector_string_R_vector_BarcodeType_R(const cv::barcode::BarcodeDetector* instance, const cv::_InputArray* img, const cv::_InputArray* points, std::vector<std::string>* decoded_info, std::vector<cv::barcode::BarcodeType>* decoded_type) {
		try {
			bool ret = instance->decode(*img, *points, *decoded_info, *decoded_type);
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	Result<bool> cv_barcode_BarcodeDetector_detectAndDecode_const_const__InputArrayR_vector_string_R_vector_BarcodeType_R_const__OutputArrayR(const cv::barcode::BarcodeDetector* instance, const cv::_InputArray* img, std::vector<std::string>* decoded_info, std::vector<cv::barcode::BarcodeType>* decoded_type, const cv::_OutputArray* points) {
		try {
			bool ret = instance->detectAndDecode(*img, *decoded_info, *decoded_type, *points);
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
}
