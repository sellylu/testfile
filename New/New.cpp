// 

#include "stdafx.h"
#include <iostream>
#include <opencv2\opencv.hpp>

//using namespace cv;
//using namespace std;

int main(){

	cv::Mat image;
	image = cv::imread("../image/minions.jpg");   // Read the file
	uchar *pixptr;
	if(image.empty()){
		std::cout << "圖片不見了QQ";
		system ("pause");
		return 0;
	}
	for(int i=0; i<image.rows; i++){
		pixptr = image.ptr<uchar>(i);
		for(int j=0; j<image.cols; j++){
			pixptr[0]= pixptr[0]*0.5*3;
			pixptr[1]= pixptr[1]*0.3*3;
			pixptr[2]= pixptr[2]*0.2*3;
			pixptr+=3;
		}
	}
	cv::imwrite("../image/Result.png", image);
	cv::imshow("Traverse result", image);
    cv::waitKey(0);
	return(0);
}