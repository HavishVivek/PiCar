#include "aruco.hpp"
#include "aruco_types.hpp"

extern "C" {
	Result<double> cv_aruco_calibrateCameraAruco_const__InputArrayR_const__InputArrayR_const__InputArrayR_const_Ptr_Board_R_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputArray* corners, const cv::_InputArray* ids, const cv::_InputArray* counter, const cv::Ptr<cv::aruco::Board>* board, cv::Size* imageSize, const cv::_InputOutputArray* cameraMatrix, const cv::_InputOutputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, const cv::_OutputArray* stdDeviationsIntrinsics, const cv::_OutputArray* stdDeviationsExtrinsics, const cv::_OutputArray* perViewErrors, int flags, cv::TermCriteria* criteria) {
		try {
			double ret = cv::aruco::calibrateCameraAruco(*corners, *ids, *counter, *board, *imageSize, *cameraMatrix, *distCoeffs, *rvecs, *tvecs, *stdDeviationsIntrinsics, *stdDeviationsExtrinsics, *perViewErrors, flags, *criteria);
			return Ok<double>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<double>))
	}
	
	Result<double> cv_aruco_calibrateCameraAruco_const__InputArrayR_const__InputArrayR_const__InputArrayR_const_Ptr_Board_R_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputArray* corners, const cv::_InputArray* ids, const cv::_InputArray* counter, const cv::Ptr<cv::aruco::Board>* board, cv::Size* imageSize, const cv::_InputOutputArray* cameraMatrix, const cv::_InputOutputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, int flags, cv::TermCriteria* criteria) {
		try {
			double ret = cv::aruco::calibrateCameraAruco(*corners, *ids, *counter, *board, *imageSize, *cameraMatrix, *distCoeffs, *rvecs, *tvecs, flags, *criteria);
			return Ok<double>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<double>))
	}
	
	Result<double> cv_aruco_calibrateCameraCharuco_const__InputArrayR_const__InputArrayR_const_Ptr_CharucoBoard_R_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputArray* charucoCorners, const cv::_InputArray* charucoIds, const cv::Ptr<cv::aruco::CharucoBoard>* board, cv::Size* imageSize, const cv::_InputOutputArray* cameraMatrix, const cv::_InputOutputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, const cv::_OutputArray* stdDeviationsIntrinsics, const cv::_OutputArray* stdDeviationsExtrinsics, const cv::_OutputArray* perViewErrors, int flags, cv::TermCriteria* criteria) {
		try {
			double ret = cv::aruco::calibrateCameraCharuco(*charucoCorners, *charucoIds, *board, *imageSize, *cameraMatrix, *distCoeffs, *rvecs, *tvecs, *stdDeviationsIntrinsics, *stdDeviationsExtrinsics, *perViewErrors, flags, *criteria);
			return Ok<double>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<double>))
	}
	
	Result<double> cv_aruco_calibrateCameraCharuco_const__InputArrayR_const__InputArrayR_const_Ptr_CharucoBoard_R_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputArray* charucoCorners, const cv::_InputArray* charucoIds, const cv::Ptr<cv::aruco::CharucoBoard>* board, cv::Size* imageSize, const cv::_InputOutputArray* cameraMatrix, const cv::_InputOutputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, int flags, cv::TermCriteria* criteria) {
		try {
			double ret = cv::aruco::calibrateCameraCharuco(*charucoCorners, *charucoIds, *board, *imageSize, *cameraMatrix, *distCoeffs, *rvecs, *tvecs, flags, *criteria);
			return Ok<double>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<double>))
	}
	
	Result_void cv_aruco_detectCharucoDiamond_const__InputArrayR_const__InputArrayR_const__InputArrayR_float_const__OutputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_Ptr_Dictionary_(const cv::_InputArray* image, const cv::_InputArray* markerCorners, const cv::_InputArray* markerIds, float squareMarkerLengthRate, const cv::_OutputArray* diamondCorners, const cv::_OutputArray* diamondIds, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, cv::Ptr<cv::aruco::Dictionary>* dictionary) {
		try {
			cv::aruco::detectCharucoDiamond(*image, *markerCorners, *markerIds, squareMarkerLengthRate, *diamondCorners, *diamondIds, *cameraMatrix, *distCoeffs, *dictionary);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_aruco_detectMarkers_const__InputArrayR_const_Ptr_Dictionary_R_const__OutputArrayR_const__OutputArrayR_const_Ptr_DetectorParameters_R_const__OutputArrayR(const cv::_InputArray* image, const cv::Ptr<cv::aruco::Dictionary>* dictionary, const cv::_OutputArray* corners, const cv::_OutputArray* ids, const cv::Ptr<cv::aruco::DetectorParameters>* parameters, const cv::_OutputArray* rejectedImgPoints) {
		try {
			cv::aruco::detectMarkers(*image, *dictionary, *corners, *ids, *parameters, *rejectedImgPoints);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_aruco_drawCharucoDiamond_const_Ptr_Dictionary_R_Vec4i_int_int_const__OutputArrayR_int_int(const cv::Ptr<cv::aruco::Dictionary>* dictionary, cv::Vec4i* ids, int squareLength, int markerLength, const cv::_OutputArray* img, int marginSize, int borderBits) {
		try {
			cv::aruco::drawCharucoDiamond(*dictionary, *ids, squareLength, markerLength, *img, marginSize, borderBits);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_aruco_drawDetectedCornersCharuco_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR_Scalar(const cv::_InputOutputArray* image, const cv::_InputArray* charucoCorners, const cv::_InputArray* charucoIds, cv::Scalar* cornerColor) {
		try {
			cv::aruco::drawDetectedCornersCharuco(*image, *charucoCorners, *charucoIds, *cornerColor);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_aruco_drawDetectedDiamonds_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR_Scalar(const cv::_InputOutputArray* image, const cv::_InputArray* diamondCorners, const cv::_InputArray* diamondIds, cv::Scalar* borderColor) {
		try {
			cv::aruco::drawDetectedDiamonds(*image, *diamondCorners, *diamondIds, *borderColor);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_aruco_drawDetectedMarkers_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR_Scalar(const cv::_InputOutputArray* image, const cv::_InputArray* corners, const cv::_InputArray* ids, cv::Scalar* borderColor) {
		try {
			cv::aruco::drawDetectedMarkers(*image, *corners, *ids, *borderColor);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_aruco_drawMarker_const_Ptr_Dictionary_R_int_int_const__OutputArrayR_int(const cv::Ptr<cv::aruco::Dictionary>* dictionary, int id, int sidePixels, const cv::_OutputArray* img, int borderBits) {
		try {
			cv::aruco::drawMarker(*dictionary, id, sidePixels, *img, borderBits);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_aruco_drawPlanarBoard_const_Ptr_Board_R_Size_const__OutputArrayR_int_int(const cv::Ptr<cv::aruco::Board>* board, cv::Size* outSize, const cv::_OutputArray* img, int marginSize, int borderBits) {
		try {
			cv::aruco::drawPlanarBoard(*board, *outSize, *img, marginSize, borderBits);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<int> cv_aruco_estimatePoseBoard_const__InputArrayR_const__InputArrayR_const_Ptr_Board_R_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_bool(const cv::_InputArray* corners, const cv::_InputArray* ids, const cv::Ptr<cv::aruco::Board>* board, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, bool useExtrinsicGuess) {
		try {
			int ret = cv::aruco::estimatePoseBoard(*corners, *ids, *board, *cameraMatrix, *distCoeffs, *rvec, *tvec, useExtrinsicGuess);
			return Ok<int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<int>))
	}
	
	Result<bool> cv_aruco_estimatePoseCharucoBoard_const__InputArrayR_const__InputArrayR_const_Ptr_CharucoBoard_R_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_bool(const cv::_InputArray* charucoCorners, const cv::_InputArray* charucoIds, const cv::Ptr<cv::aruco::CharucoBoard>* board, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, bool useExtrinsicGuess) {
		try {
			bool ret = cv::aruco::estimatePoseCharucoBoard(*charucoCorners, *charucoIds, *board, *cameraMatrix, *distCoeffs, *rvec, *tvec, useExtrinsicGuess);
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	Result_void cv_aruco_estimatePoseSingleMarkers_const__InputArrayR_float_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_Ptr_EstimateParameters_(const cv::_InputArray* corners, float markerLength, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, const cv::_OutputArray* _objPoints, cv::Ptr<cv::aruco::EstimateParameters>* estimateParameters) {
		try {
			cv::aruco::estimatePoseSingleMarkers(*corners, markerLength, *cameraMatrix, *distCoeffs, *rvecs, *tvecs, *_objPoints, *estimateParameters);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<cv::Ptr<cv::aruco::Dictionary>*> cv_aruco_generateCustomDictionary_int_int_const_Ptr_Dictionary_R_int(int nMarkers, int markerSize, const cv::Ptr<cv::aruco::Dictionary>* baseDictionary, int randomSeed) {
		try {
			cv::Ptr<cv::aruco::Dictionary> ret = cv::aruco::generateCustomDictionary(nMarkers, markerSize, *baseDictionary, randomSeed);
			return Ok(new cv::Ptr<cv::aruco::Dictionary>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::aruco::Dictionary>*>))
	}
	
	Result<cv::Ptr<cv::aruco::Dictionary>*> cv_aruco_generateCustomDictionary_int_int_int(int nMarkers, int markerSize, int randomSeed) {
		try {
			cv::Ptr<cv::aruco::Dictionary> ret = cv::aruco::generateCustomDictionary(nMarkers, markerSize, randomSeed);
			return Ok(new cv::Ptr<cv::aruco::Dictionary>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::aruco::Dictionary>*>))
	}
	
	Result_void cv_aruco_getBoardObjectAndImagePoints_const_Ptr_Board_R_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::Ptr<cv::aruco::Board>* board, const cv::_InputArray* detectedCorners, const cv::_InputArray* detectedIds, const cv::_OutputArray* objPoints, const cv::_OutputArray* imgPoints) {
		try {
			cv::aruco::getBoardObjectAndImagePoints(*board, *detectedCorners, *detectedIds, *objPoints, *imgPoints);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<cv::Ptr<cv::aruco::Dictionary>*> cv_aruco_getPredefinedDictionary_PREDEFINED_DICTIONARY_NAME(cv::aruco::PREDEFINED_DICTIONARY_NAME name) {
		try {
			cv::Ptr<cv::aruco::Dictionary> ret = cv::aruco::getPredefinedDictionary(name);
			return Ok(new cv::Ptr<cv::aruco::Dictionary>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::aruco::Dictionary>*>))
	}
	
	Result<cv::Ptr<cv::aruco::Dictionary>*> cv_aruco_getPredefinedDictionary_int(int dict) {
		try {
			cv::Ptr<cv::aruco::Dictionary> ret = cv::aruco::getPredefinedDictionary(dict);
			return Ok(new cv::Ptr<cv::aruco::Dictionary>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::aruco::Dictionary>*>))
	}
	
	Result<int> cv_aruco_interpolateCornersCharuco_const__InputArrayR_const__InputArrayR_const__InputArrayR_const_Ptr_CharucoBoard_R_const__OutputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_int(const cv::_InputArray* markerCorners, const cv::_InputArray* markerIds, const cv::_InputArray* image, const cv::Ptr<cv::aruco::CharucoBoard>* board, const cv::_OutputArray* charucoCorners, const cv::_OutputArray* charucoIds, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, int minMarkers) {
		try {
			int ret = cv::aruco::interpolateCornersCharuco(*markerCorners, *markerIds, *image, *board, *charucoCorners, *charucoIds, *cameraMatrix, *distCoeffs, minMarkers);
			return Ok<int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<int>))
	}
	
	Result_void cv_aruco_refineDetectedMarkers_const__InputArrayR_const_Ptr_Board_R_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR_float_float_bool_const__OutputArrayR_const_Ptr_DetectorParameters_R(const cv::_InputArray* image, const cv::Ptr<cv::aruco::Board>* board, const cv::_InputOutputArray* detectedCorners, const cv::_InputOutputArray* detectedIds, const cv::_InputOutputArray* rejectedCorners, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, float minRepDistance, float errorCorrectionRate, bool checkAllOrders, const cv::_OutputArray* recoveredIdxs, const cv::Ptr<cv::aruco::DetectorParameters>* parameters) {
		try {
			cv::aruco::refineDetectedMarkers(*image, *board, *detectedCorners, *detectedIds, *rejectedCorners, *cameraMatrix, *distCoeffs, minRepDistance, errorCorrectionRate, checkAllOrders, *recoveredIdxs, *parameters);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<bool> cv_aruco_testCharucoCornersCollinear_const_Ptr_CharucoBoard_R_const__InputArrayR(const cv::Ptr<cv::aruco::CharucoBoard>* _board, const cv::_InputArray* _charucoIds) {
		try {
			bool ret = cv::aruco::testCharucoCornersCollinear(*_board, *_charucoIds);
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	std::vector<std::vector<cv::Point3f>>* cv_aruco_Board_getPropObjPoints_const(const cv::aruco::Board* instance) {
		std::vector<std::vector<cv::Point3f>> ret = instance->objPoints;
		return new std::vector<std::vector<cv::Point3f>>(ret);
	}
	
	void cv_aruco_Board_setPropObjPoints_vector_vector_Point3f__(cv::aruco::Board* instance, std::vector<std::vector<cv::Point3f>>* val) {
		instance->objPoints = *val;
	}
	
	cv::Ptr<cv::aruco::Dictionary>* cv_aruco_Board_getPropDictionary(cv::aruco::Board* instance) {
		cv::Ptr<cv::aruco::Dictionary> ret = instance->dictionary;
		return new cv::Ptr<cv::aruco::Dictionary>(ret);
	}
	
	void cv_aruco_Board_setPropDictionary_Ptr_Dictionary_(cv::aruco::Board* instance, cv::Ptr<cv::aruco::Dictionary>* val) {
		instance->dictionary = *val;
	}
	
	std::vector<int>* cv_aruco_Board_getPropIds_const(const cv::aruco::Board* instance) {
		std::vector<int> ret = instance->ids;
		return new std::vector<int>(ret);
	}
	
	void cv_aruco_Board_setPropIds_vector_int_(cv::aruco::Board* instance, std::vector<int>* val) {
		instance->ids = *val;
	}
	
	cv::Point3f cv_aruco_Board_getPropRightBottomBorder_const(const cv::aruco::Board* instance) {
		cv::Point3f ret = instance->rightBottomBorder;
		return (cv::Point3f)ret;
	}
	
	void cv_aruco_Board_setPropRightBottomBorder_Point3f(cv::aruco::Board* instance, cv::Point3f* val) {
		instance->rightBottomBorder = *val;
	}
	
	void cv_Board_delete(cv::aruco::Board* instance) {
		delete instance;
	}
	Result<cv::Ptr<cv::aruco::Board>*> cv_aruco_Board_create_const__InputArrayR_const_Ptr_Dictionary_R_const__InputArrayR(const cv::_InputArray* objPoints, const cv::Ptr<cv::aruco::Dictionary>* dictionary, const cv::_InputArray* ids) {
		try {
			cv::Ptr<cv::aruco::Board> ret = cv::aruco::Board::create(*objPoints, *dictionary, *ids);
			return Ok(new cv::Ptr<cv::aruco::Board>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::aruco::Board>*>))
	}
	
	Result_void cv_aruco_Board_setIds_const__InputArrayR(cv::aruco::Board* instance, const cv::_InputArray* ids) {
		try {
			instance->setIds(*ids);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	std::vector<cv::Point3f>* cv_aruco_CharucoBoard_getPropChessboardCorners_const(const cv::aruco::CharucoBoard* instance) {
		std::vector<cv::Point3f> ret = instance->chessboardCorners;
		return new std::vector<cv::Point3f>(ret);
	}
	
	void cv_aruco_CharucoBoard_setPropChessboardCorners_vector_Point3f_(cv::aruco::CharucoBoard* instance, std::vector<cv::Point3f>* val) {
		instance->chessboardCorners = *val;
	}
	
	std::vector<std::vector<int>>* cv_aruco_CharucoBoard_getPropNearestMarkerIdx_const(const cv::aruco::CharucoBoard* instance) {
		std::vector<std::vector<int>> ret = instance->nearestMarkerIdx;
		return new std::vector<std::vector<int>>(ret);
	}
	
	void cv_aruco_CharucoBoard_setPropNearestMarkerIdx_vector_vector_int__(cv::aruco::CharucoBoard* instance, std::vector<std::vector<int>>* val) {
		instance->nearestMarkerIdx = *val;
	}
	
	std::vector<std::vector<int>>* cv_aruco_CharucoBoard_getPropNearestMarkerCorners_const(const cv::aruco::CharucoBoard* instance) {
		std::vector<std::vector<int>> ret = instance->nearestMarkerCorners;
		return new std::vector<std::vector<int>>(ret);
	}
	
	void cv_aruco_CharucoBoard_setPropNearestMarkerCorners_vector_vector_int__(cv::aruco::CharucoBoard* instance, std::vector<std::vector<int>>* val) {
		instance->nearestMarkerCorners = *val;
	}
	
	cv::aruco::Board* cv_CharucoBoard_to_Board(cv::aruco::CharucoBoard* instance) {
		return dynamic_cast<cv::aruco::Board*>(instance);
	}
	
	void cv_CharucoBoard_delete(cv::aruco::CharucoBoard* instance) {
		delete instance;
	}
	Result_void cv_aruco_CharucoBoard_draw_Size_const__OutputArrayR_int_int(cv::aruco::CharucoBoard* instance, cv::Size* outSize, const cv::_OutputArray* img, int marginSize, int borderBits) {
		try {
			instance->draw(*outSize, *img, marginSize, borderBits);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<cv::Ptr<cv::aruco::CharucoBoard>*> cv_aruco_CharucoBoard_create_int_int_float_float_const_Ptr_Dictionary_R(int squaresX, int squaresY, float squareLength, float markerLength, const cv::Ptr<cv::aruco::Dictionary>* dictionary) {
		try {
			cv::Ptr<cv::aruco::CharucoBoard> ret = cv::aruco::CharucoBoard::create(squaresX, squaresY, squareLength, markerLength, *dictionary);
			return Ok(new cv::Ptr<cv::aruco::CharucoBoard>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::aruco::CharucoBoard>*>))
	}
	
	Result<cv::Size> cv_aruco_CharucoBoard_getChessboardSize_const(const cv::aruco::CharucoBoard* instance) {
		try {
			cv::Size ret = instance->getChessboardSize();
			return Ok<cv::Size>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Size>))
	}
	
	Result<float> cv_aruco_CharucoBoard_getSquareLength_const(const cv::aruco::CharucoBoard* instance) {
		try {
			float ret = instance->getSquareLength();
			return Ok<float>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<float>))
	}
	
	Result<float> cv_aruco_CharucoBoard_getMarkerLength_const(const cv::aruco::CharucoBoard* instance) {
		try {
			float ret = instance->getMarkerLength();
			return Ok<float>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<float>))
	}
	
	int cv_aruco_DetectorParameters_getPropAdaptiveThreshWinSizeMin_const(const cv::aruco::DetectorParameters* instance) {
		int ret = instance->adaptiveThreshWinSizeMin;
		return (int)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropAdaptiveThreshWinSizeMin_int(cv::aruco::DetectorParameters* instance, int val) {
		instance->adaptiveThreshWinSizeMin = val;
	}
	
	int cv_aruco_DetectorParameters_getPropAdaptiveThreshWinSizeMax_const(const cv::aruco::DetectorParameters* instance) {
		int ret = instance->adaptiveThreshWinSizeMax;
		return (int)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropAdaptiveThreshWinSizeMax_int(cv::aruco::DetectorParameters* instance, int val) {
		instance->adaptiveThreshWinSizeMax = val;
	}
	
	int cv_aruco_DetectorParameters_getPropAdaptiveThreshWinSizeStep_const(const cv::aruco::DetectorParameters* instance) {
		int ret = instance->adaptiveThreshWinSizeStep;
		return (int)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropAdaptiveThreshWinSizeStep_int(cv::aruco::DetectorParameters* instance, int val) {
		instance->adaptiveThreshWinSizeStep = val;
	}
	
	double cv_aruco_DetectorParameters_getPropAdaptiveThreshConstant_const(const cv::aruco::DetectorParameters* instance) {
		double ret = instance->adaptiveThreshConstant;
		return (double)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropAdaptiveThreshConstant_double(cv::aruco::DetectorParameters* instance, double val) {
		instance->adaptiveThreshConstant = val;
	}
	
	double cv_aruco_DetectorParameters_getPropMinMarkerPerimeterRate_const(const cv::aruco::DetectorParameters* instance) {
		double ret = instance->minMarkerPerimeterRate;
		return (double)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropMinMarkerPerimeterRate_double(cv::aruco::DetectorParameters* instance, double val) {
		instance->minMarkerPerimeterRate = val;
	}
	
	double cv_aruco_DetectorParameters_getPropMaxMarkerPerimeterRate_const(const cv::aruco::DetectorParameters* instance) {
		double ret = instance->maxMarkerPerimeterRate;
		return (double)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropMaxMarkerPerimeterRate_double(cv::aruco::DetectorParameters* instance, double val) {
		instance->maxMarkerPerimeterRate = val;
	}
	
	double cv_aruco_DetectorParameters_getPropPolygonalApproxAccuracyRate_const(const cv::aruco::DetectorParameters* instance) {
		double ret = instance->polygonalApproxAccuracyRate;
		return (double)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropPolygonalApproxAccuracyRate_double(cv::aruco::DetectorParameters* instance, double val) {
		instance->polygonalApproxAccuracyRate = val;
	}
	
	double cv_aruco_DetectorParameters_getPropMinCornerDistanceRate_const(const cv::aruco::DetectorParameters* instance) {
		double ret = instance->minCornerDistanceRate;
		return (double)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropMinCornerDistanceRate_double(cv::aruco::DetectorParameters* instance, double val) {
		instance->minCornerDistanceRate = val;
	}
	
	int cv_aruco_DetectorParameters_getPropMinDistanceToBorder_const(const cv::aruco::DetectorParameters* instance) {
		int ret = instance->minDistanceToBorder;
		return (int)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropMinDistanceToBorder_int(cv::aruco::DetectorParameters* instance, int val) {
		instance->minDistanceToBorder = val;
	}
	
	double cv_aruco_DetectorParameters_getPropMinMarkerDistanceRate_const(const cv::aruco::DetectorParameters* instance) {
		double ret = instance->minMarkerDistanceRate;
		return (double)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropMinMarkerDistanceRate_double(cv::aruco::DetectorParameters* instance, double val) {
		instance->minMarkerDistanceRate = val;
	}
	
	int cv_aruco_DetectorParameters_getPropCornerRefinementMethod_const(const cv::aruco::DetectorParameters* instance) {
		int ret = instance->cornerRefinementMethod;
		return (int)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropCornerRefinementMethod_int(cv::aruco::DetectorParameters* instance, int val) {
		instance->cornerRefinementMethod = val;
	}
	
	int cv_aruco_DetectorParameters_getPropCornerRefinementWinSize_const(const cv::aruco::DetectorParameters* instance) {
		int ret = instance->cornerRefinementWinSize;
		return (int)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropCornerRefinementWinSize_int(cv::aruco::DetectorParameters* instance, int val) {
		instance->cornerRefinementWinSize = val;
	}
	
	int cv_aruco_DetectorParameters_getPropCornerRefinementMaxIterations_const(const cv::aruco::DetectorParameters* instance) {
		int ret = instance->cornerRefinementMaxIterations;
		return (int)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropCornerRefinementMaxIterations_int(cv::aruco::DetectorParameters* instance, int val) {
		instance->cornerRefinementMaxIterations = val;
	}
	
	double cv_aruco_DetectorParameters_getPropCornerRefinementMinAccuracy_const(const cv::aruco::DetectorParameters* instance) {
		double ret = instance->cornerRefinementMinAccuracy;
		return (double)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropCornerRefinementMinAccuracy_double(cv::aruco::DetectorParameters* instance, double val) {
		instance->cornerRefinementMinAccuracy = val;
	}
	
	int cv_aruco_DetectorParameters_getPropMarkerBorderBits_const(const cv::aruco::DetectorParameters* instance) {
		int ret = instance->markerBorderBits;
		return (int)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropMarkerBorderBits_int(cv::aruco::DetectorParameters* instance, int val) {
		instance->markerBorderBits = val;
	}
	
	int cv_aruco_DetectorParameters_getPropPerspectiveRemovePixelPerCell_const(const cv::aruco::DetectorParameters* instance) {
		int ret = instance->perspectiveRemovePixelPerCell;
		return (int)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropPerspectiveRemovePixelPerCell_int(cv::aruco::DetectorParameters* instance, int val) {
		instance->perspectiveRemovePixelPerCell = val;
	}
	
	double cv_aruco_DetectorParameters_getPropPerspectiveRemoveIgnoredMarginPerCell_const(const cv::aruco::DetectorParameters* instance) {
		double ret = instance->perspectiveRemoveIgnoredMarginPerCell;
		return (double)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropPerspectiveRemoveIgnoredMarginPerCell_double(cv::aruco::DetectorParameters* instance, double val) {
		instance->perspectiveRemoveIgnoredMarginPerCell = val;
	}
	
	double cv_aruco_DetectorParameters_getPropMaxErroneousBitsInBorderRate_const(const cv::aruco::DetectorParameters* instance) {
		double ret = instance->maxErroneousBitsInBorderRate;
		return (double)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropMaxErroneousBitsInBorderRate_double(cv::aruco::DetectorParameters* instance, double val) {
		instance->maxErroneousBitsInBorderRate = val;
	}
	
	double cv_aruco_DetectorParameters_getPropMinOtsuStdDev_const(const cv::aruco::DetectorParameters* instance) {
		double ret = instance->minOtsuStdDev;
		return (double)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropMinOtsuStdDev_double(cv::aruco::DetectorParameters* instance, double val) {
		instance->minOtsuStdDev = val;
	}
	
	double cv_aruco_DetectorParameters_getPropErrorCorrectionRate_const(const cv::aruco::DetectorParameters* instance) {
		double ret = instance->errorCorrectionRate;
		return (double)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropErrorCorrectionRate_double(cv::aruco::DetectorParameters* instance, double val) {
		instance->errorCorrectionRate = val;
	}
	
	float cv_aruco_DetectorParameters_getPropAprilTagQuadDecimate_const(const cv::aruco::DetectorParameters* instance) {
		float ret = instance->aprilTagQuadDecimate;
		return (float)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropAprilTagQuadDecimate_float(cv::aruco::DetectorParameters* instance, float val) {
		instance->aprilTagQuadDecimate = val;
	}
	
	float cv_aruco_DetectorParameters_getPropAprilTagQuadSigma_const(const cv::aruco::DetectorParameters* instance) {
		float ret = instance->aprilTagQuadSigma;
		return (float)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropAprilTagQuadSigma_float(cv::aruco::DetectorParameters* instance, float val) {
		instance->aprilTagQuadSigma = val;
	}
	
	int cv_aruco_DetectorParameters_getPropAprilTagMinClusterPixels_const(const cv::aruco::DetectorParameters* instance) {
		int ret = instance->aprilTagMinClusterPixels;
		return (int)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropAprilTagMinClusterPixels_int(cv::aruco::DetectorParameters* instance, int val) {
		instance->aprilTagMinClusterPixels = val;
	}
	
	int cv_aruco_DetectorParameters_getPropAprilTagMaxNmaxima_const(const cv::aruco::DetectorParameters* instance) {
		int ret = instance->aprilTagMaxNmaxima;
		return (int)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropAprilTagMaxNmaxima_int(cv::aruco::DetectorParameters* instance, int val) {
		instance->aprilTagMaxNmaxima = val;
	}
	
	float cv_aruco_DetectorParameters_getPropAprilTagCriticalRad_const(const cv::aruco::DetectorParameters* instance) {
		float ret = instance->aprilTagCriticalRad;
		return (float)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropAprilTagCriticalRad_float(cv::aruco::DetectorParameters* instance, float val) {
		instance->aprilTagCriticalRad = val;
	}
	
	float cv_aruco_DetectorParameters_getPropAprilTagMaxLineFitMse_const(const cv::aruco::DetectorParameters* instance) {
		float ret = instance->aprilTagMaxLineFitMse;
		return (float)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropAprilTagMaxLineFitMse_float(cv::aruco::DetectorParameters* instance, float val) {
		instance->aprilTagMaxLineFitMse = val;
	}
	
	int cv_aruco_DetectorParameters_getPropAprilTagMinWhiteBlackDiff_const(const cv::aruco::DetectorParameters* instance) {
		int ret = instance->aprilTagMinWhiteBlackDiff;
		return (int)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropAprilTagMinWhiteBlackDiff_int(cv::aruco::DetectorParameters* instance, int val) {
		instance->aprilTagMinWhiteBlackDiff = val;
	}
	
	int cv_aruco_DetectorParameters_getPropAprilTagDeglitch_const(const cv::aruco::DetectorParameters* instance) {
		int ret = instance->aprilTagDeglitch;
		return (int)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropAprilTagDeglitch_int(cv::aruco::DetectorParameters* instance, int val) {
		instance->aprilTagDeglitch = val;
	}
	
	bool cv_aruco_DetectorParameters_getPropDetectInvertedMarker_const(const cv::aruco::DetectorParameters* instance) {
		bool ret = instance->detectInvertedMarker;
		return (bool)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropDetectInvertedMarker_bool(cv::aruco::DetectorParameters* instance, bool val) {
		instance->detectInvertedMarker = val;
	}
	
	bool cv_aruco_DetectorParameters_getPropUseAruco3Detection_const(const cv::aruco::DetectorParameters* instance) {
		bool ret = instance->useAruco3Detection;
		return (bool)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropUseAruco3Detection_bool(cv::aruco::DetectorParameters* instance, bool val) {
		instance->useAruco3Detection = val;
	}
	
	int cv_aruco_DetectorParameters_getPropMinSideLengthCanonicalImg_const(const cv::aruco::DetectorParameters* instance) {
		int ret = instance->minSideLengthCanonicalImg;
		return (int)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropMinSideLengthCanonicalImg_int(cv::aruco::DetectorParameters* instance, int val) {
		instance->minSideLengthCanonicalImg = val;
	}
	
	float cv_aruco_DetectorParameters_getPropMinMarkerLengthRatioOriginalImg_const(const cv::aruco::DetectorParameters* instance) {
		float ret = instance->minMarkerLengthRatioOriginalImg;
		return (float)ret;
	}
	
	void cv_aruco_DetectorParameters_setPropMinMarkerLengthRatioOriginalImg_float(cv::aruco::DetectorParameters* instance, float val) {
		instance->minMarkerLengthRatioOriginalImg = val;
	}
	
	void cv_DetectorParameters_delete(cv::aruco::DetectorParameters* instance) {
		delete instance;
	}
	Result<cv::aruco::DetectorParameters*> cv_aruco_DetectorParameters_DetectorParameters() {
		try {
			cv::aruco::DetectorParameters* ret = new cv::aruco::DetectorParameters();
			return Ok<cv::aruco::DetectorParameters*>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::aruco::DetectorParameters*>))
	}
	
	Result<cv::Ptr<cv::aruco::DetectorParameters>*> cv_aruco_DetectorParameters_create() {
		try {
			cv::Ptr<cv::aruco::DetectorParameters> ret = cv::aruco::DetectorParameters::create();
			return Ok(new cv::Ptr<cv::aruco::DetectorParameters>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::aruco::DetectorParameters>*>))
	}
	
	Result<bool> cv_aruco_DetectorParameters_readDetectorParameters_const_FileNodeR(cv::aruco::DetectorParameters* instance, const cv::FileNode* fn) {
		try {
			bool ret = instance->readDetectorParameters(*fn);
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	cv::Mat* cv_aruco_Dictionary_getPropBytesList_const(const cv::aruco::Dictionary* instance) {
		cv::Mat ret = instance->bytesList;
		return new cv::Mat(ret);
	}
	
	void cv_aruco_Dictionary_setPropBytesList_Mat(cv::aruco::Dictionary* instance, cv::Mat* val) {
		instance->bytesList = *val;
	}
	
	int cv_aruco_Dictionary_getPropMarkerSize_const(const cv::aruco::Dictionary* instance) {
		int ret = instance->markerSize;
		return (int)ret;
	}
	
	void cv_aruco_Dictionary_setPropMarkerSize_int(cv::aruco::Dictionary* instance, int val) {
		instance->markerSize = val;
	}
	
	int cv_aruco_Dictionary_getPropMaxCorrectionBits_const(const cv::aruco::Dictionary* instance) {
		int ret = instance->maxCorrectionBits;
		return (int)ret;
	}
	
	void cv_aruco_Dictionary_setPropMaxCorrectionBits_int(cv::aruco::Dictionary* instance, int val) {
		instance->maxCorrectionBits = val;
	}
	
	void cv_Dictionary_delete(cv::aruco::Dictionary* instance) {
		delete instance;
	}
	Result<cv::aruco::Dictionary*> cv_aruco_Dictionary_Dictionary_const_MatR_int_int(const cv::Mat* _bytesList, int _markerSize, int _maxcorr) {
		try {
			cv::aruco::Dictionary* ret = new cv::aruco::Dictionary(*_bytesList, _markerSize, _maxcorr);
			return Ok<cv::aruco::Dictionary*>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::aruco::Dictionary*>))
	}
	
	Result<cv::aruco::Dictionary*> cv_aruco_Dictionary_Dictionary_const_Ptr_Dictionary_R(const cv::Ptr<cv::aruco::Dictionary>* _dictionary) {
		try {
			cv::aruco::Dictionary* ret = new cv::aruco::Dictionary(*_dictionary);
			return Ok<cv::aruco::Dictionary*>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::aruco::Dictionary*>))
	}
	
	Result<cv::Ptr<cv::aruco::Dictionary>*> cv_aruco_Dictionary_create_int_int_int(int nMarkers, int markerSize, int randomSeed) {
		try {
			cv::Ptr<cv::aruco::Dictionary> ret = cv::aruco::Dictionary::create(nMarkers, markerSize, randomSeed);
			return Ok(new cv::Ptr<cv::aruco::Dictionary>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::aruco::Dictionary>*>))
	}
	
	Result<cv::Ptr<cv::aruco::Dictionary>*> cv_aruco_Dictionary_create_int_int_const_Ptr_Dictionary_R_int(int nMarkers, int markerSize, const cv::Ptr<cv::aruco::Dictionary>* baseDictionary, int randomSeed) {
		try {
			cv::Ptr<cv::aruco::Dictionary> ret = cv::aruco::Dictionary::create(nMarkers, markerSize, *baseDictionary, randomSeed);
			return Ok(new cv::Ptr<cv::aruco::Dictionary>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::aruco::Dictionary>*>))
	}
	
	Result<bool> cv_aruco_Dictionary_readDictionary_const_FileNodeR(cv::aruco::Dictionary* instance, const cv::FileNode* fn) {
		try {
			bool ret = instance->readDictionary(*fn);
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	Result_void cv_aruco_Dictionary_writeDictionary_Ptr_FileStorage_R(cv::aruco::Dictionary* instance, cv::Ptr<cv::FileStorage>* fs) {
		try {
			instance->writeDictionary(*fs);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<cv::Ptr<cv::aruco::Dictionary>*> cv_aruco_Dictionary_get_int(int dict) {
		try {
			cv::Ptr<cv::aruco::Dictionary> ret = cv::aruco::Dictionary::get(dict);
			return Ok(new cv::Ptr<cv::aruco::Dictionary>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::aruco::Dictionary>*>))
	}
	
	Result<bool> cv_aruco_Dictionary_identify_const_const_MatR_intR_intR_double(const cv::aruco::Dictionary* instance, const cv::Mat* onlyBits, int* idx, int* rotation, double maxCorrectionRate) {
		try {
			bool ret = instance->identify(*onlyBits, *idx, *rotation, maxCorrectionRate);
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	Result<int> cv_aruco_Dictionary_getDistanceToId_const_const__InputArrayR_int_bool(const cv::aruco::Dictionary* instance, const cv::_InputArray* bits, int id, bool allRotations) {
		try {
			int ret = instance->getDistanceToId(*bits, id, allRotations);
			return Ok<int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<int>))
	}
	
	Result_void cv_aruco_Dictionary_drawMarker_const_int_int_const__OutputArrayR_int(const cv::aruco::Dictionary* instance, int id, int sidePixels, const cv::_OutputArray* _img, int borderBits) {
		try {
			instance->drawMarker(id, sidePixels, *_img, borderBits);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<cv::Mat*> cv_aruco_Dictionary_getByteListFromBits_const_MatR(const cv::Mat* bits) {
		try {
			cv::Mat ret = cv::aruco::Dictionary::getByteListFromBits(*bits);
			return Ok(new cv::Mat(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Mat*>))
	}
	
	Result<cv::Mat*> cv_aruco_Dictionary_getBitsFromByteList_const_MatR_int(const cv::Mat* byteList, int markerSize) {
		try {
			cv::Mat ret = cv::aruco::Dictionary::getBitsFromByteList(*byteList, markerSize);
			return Ok(new cv::Mat(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Mat*>))
	}
	
	cv::aruco::PatternPos cv_aruco_EstimateParameters_getPropPattern_const(const cv::aruco::EstimateParameters* instance) {
		cv::aruco::PatternPos ret = instance->pattern;
		return (cv::aruco::PatternPos)ret;
	}
	
	void cv_aruco_EstimateParameters_setPropPattern_PatternPos(cv::aruco::EstimateParameters* instance, cv::aruco::PatternPos val) {
		instance->pattern = val;
	}
	
	bool cv_aruco_EstimateParameters_getPropUseExtrinsicGuess_const(const cv::aruco::EstimateParameters* instance) {
		bool ret = instance->useExtrinsicGuess;
		return (bool)ret;
	}
	
	void cv_aruco_EstimateParameters_setPropUseExtrinsicGuess_bool(cv::aruco::EstimateParameters* instance, bool val) {
		instance->useExtrinsicGuess = val;
	}
	
	cv::SolvePnPMethod cv_aruco_EstimateParameters_getPropSolvePnPMethod_const(const cv::aruco::EstimateParameters* instance) {
		cv::SolvePnPMethod ret = instance->solvePnPMethod;
		return (cv::SolvePnPMethod)ret;
	}
	
	void cv_aruco_EstimateParameters_setPropSolvePnPMethod_SolvePnPMethod(cv::aruco::EstimateParameters* instance, cv::SolvePnPMethod val) {
		instance->solvePnPMethod = val;
	}
	
	void cv_EstimateParameters_delete(cv::aruco::EstimateParameters* instance) {
		delete instance;
	}
	Result<cv::aruco::EstimateParameters*> cv_aruco_EstimateParameters_EstimateParameters() {
		try {
			cv::aruco::EstimateParameters* ret = new cv::aruco::EstimateParameters();
			return Ok<cv::aruco::EstimateParameters*>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::aruco::EstimateParameters*>))
	}
	
	Result<cv::Ptr<cv::aruco::EstimateParameters>*> cv_aruco_EstimateParameters_create() {
		try {
			cv::Ptr<cv::aruco::EstimateParameters> ret = cv::aruco::EstimateParameters::create();
			return Ok(new cv::Ptr<cv::aruco::EstimateParameters>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::aruco::EstimateParameters>*>))
	}
	
	cv::aruco::Board* cv_GridBoard_to_Board(cv::aruco::GridBoard* instance) {
		return dynamic_cast<cv::aruco::Board*>(instance);
	}
	
	void cv_GridBoard_delete(cv::aruco::GridBoard* instance) {
		delete instance;
	}
	Result_void cv_aruco_GridBoard_draw_Size_const__OutputArrayR_int_int(cv::aruco::GridBoard* instance, cv::Size* outSize, const cv::_OutputArray* img, int marginSize, int borderBits) {
		try {
			instance->draw(*outSize, *img, marginSize, borderBits);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<cv::Ptr<cv::aruco::GridBoard>*> cv_aruco_GridBoard_create_int_int_float_float_const_Ptr_Dictionary_R_int(int markersX, int markersY, float markerLength, float markerSeparation, const cv::Ptr<cv::aruco::Dictionary>* dictionary, int firstMarker) {
		try {
			cv::Ptr<cv::aruco::GridBoard> ret = cv::aruco::GridBoard::create(markersX, markersY, markerLength, markerSeparation, *dictionary, firstMarker);
			return Ok(new cv::Ptr<cv::aruco::GridBoard>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::aruco::GridBoard>*>))
	}
	
	Result<cv::Size> cv_aruco_GridBoard_getGridSize_const(const cv::aruco::GridBoard* instance) {
		try {
			cv::Size ret = instance->getGridSize();
			return Ok<cv::Size>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Size>))
	}
	
	Result<float> cv_aruco_GridBoard_getMarkerLength_const(const cv::aruco::GridBoard* instance) {
		try {
			float ret = instance->getMarkerLength();
			return Ok<float>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<float>))
	}
	
	Result<float> cv_aruco_GridBoard_getMarkerSeparation_const(const cv::aruco::GridBoard* instance) {
		try {
			float ret = instance->getMarkerSeparation();
			return Ok<float>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<float>))
	}
	
}
