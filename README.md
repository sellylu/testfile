# Overview
Please write down outline of porject in this part.
也可以寫中文。
* 第一點
* 第二點

# Implementation
Write down how you work on your project.
You can enbed your **code** here:
```
#include <opencv2\opencv.hpp>
int main(){
cv::Mat color = cv::imread("C:/opencv249/sources/samples/cpp/tutorial_code/images/lena.png", 1);
cv::Mat gray = cv::imread("C:/opencv249/sources/samples/cpp/tutorial_code/images/lena.png", 2);
cv::imshow("color", color);
cv::imshow("gray", gray);
cv::waitKey(0);
return 0;
}
```
Descript how this code work.

# Theory
Please explain the *background theorem* of project.
* thm 1
* thm 2

# Disparity result
Show result of your project:
<img/>

# Reference
[1] ref paper 1
[2] ref paper 2
