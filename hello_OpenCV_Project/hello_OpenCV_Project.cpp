#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;
int main1()
{
    //std::string image_path = samples::findFile("Picture1.jpg");
    std::string image_path = "C:\\Users\\100795022\\Pictures\\Picture1.jpg";
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
        return 1;
    }
    imshow("Display window", img);
    int k = waitKey(0); // Wait for a keystroke in the window
    if (k == 's')
    {
        imwrite("aref.png", img);
    }
    return 0;
}
