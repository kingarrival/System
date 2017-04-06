#include <opencv2/opencv.hpp> 

using namespace cv; 
int main() 
{ 
	Mat img = imread("E:\\bitmap.bmp"); 
	if (img.empty()) 
	{ 
		fprintf(stderr, "Error: load image failed."); 
		return -1; 
	} 

	namedWindow("image", CV_WINDOW_AUTOSIZE); 

	imshow("image", img); 

	waitKey(0); 
	return 0; 
} 