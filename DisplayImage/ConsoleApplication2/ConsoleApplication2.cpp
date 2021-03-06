// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

int main()
{
	cv::Mat image;
	std::cout << "This image is " << image.rows << " x " << image.cols << std::endl;

	image = cv::imread("C:/Users/Jon Grebe/OpenCV_Projects/testImages/puppy.jpg");

	if (image.empty())
	{
		std::cout << "Could not read image file" << std::endl;
		return -1;
	}

	cv::namedWindow("Image");
	cv::imshow("Image", image);

    return 0;
}



