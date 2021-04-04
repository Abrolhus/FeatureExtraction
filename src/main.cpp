#include <iostream>
#include <fstream>
#include <math.h>
#include <time.h>
//#include <cv.h>
//#include <highgui.h>

#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

#include "img_processing.h"
#include "line_detection.h"
#include "line_feature_detection.h"
#include "feature_extraction.h"
#include "dis_ang_translation.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include "clustering.h"

using namespace cv;
using namespace std;

int main(int argc, char **argv)
{
	vector<field_point> result_intersections;
	vector<goalposts> goalPosts;
	// loadFile("clustering.txt");
	Mat img_rgb;
	img_rgb = imread(argv[1], CV_LOAD_IMAGE_COLOR);

	// clustering(img_rgb);
	extract_features(img_rgb, result_intersections, goalPosts);

	for (int i = 0; i < result_intersections.size(); i++)
	{
		cout << "Intersection " << i << endl;
		cout << result_intersections[i].position.x << ", " << result_intersections[i].position.y << endl;
		cout << result_intersections[i].type << endl;
	}

	//imshow("va1", img_rgb);
	waitKey(0);
	return 0;
}
