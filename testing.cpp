#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int main()
{
	VideoCapture cap(0);
	Mat img;
	while(1)
	{
		cap>>img;
		imshow("video",img);
		if(waitKey(20)==32) break;
	}
}
