# Overview
Please write down outline of your porject.
也可以寫中文。
* 第一點
* 第二點

# Implementation
Write down how you work on your project.<br/>
You can enbed your **code** here:<br/>
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
Descript how these code files work.
<li><code><font color="green">proj1.cpp</font></code> The main file of project blabla....</li>	<br/>
<li><code><font color="green">func1.cpp</font> </code> blabla....<br/> 
<li><code><font color="green">func2.cpp</font> </code> blabla....<br/> 

# Theory
Please explain the *background theorem* of project.<br/>
* thm 1
* thm 2

# Disparity result
Show result of your project:<br/>
<img src="minions.jpg" width="400" height="196" >

# Reference
1.  ref paper 1<br/>
2.  ref paper 2<br/>
