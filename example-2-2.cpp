#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgcodecs.hpp"

using namespace cv;

int main(int argc, char** argv) {

	cv::Mat img = cv::imread(argv[1],-1);
	if (img.empty() ) return -1;
	cv::namedWindow("Example 2-2",cv::WINDOW_AUTOSIZE);
	imshow("Example 2-2", img);
	waitKey(0);

	destroyWindow("Example 2-2");
}
