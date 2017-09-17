// learnc1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream> //添加头文件
//api  官网文档：http://www.cplusplus.com
using namespace std;

int main()
{
	//printf("hello world ! \n"); // VS C++ 输出
	//cout << "std c++ hello world ! " << endl; // c++ 标准化输出 
	int //数据类型
		i //变量;
		= 4; //常量
	//cout << (i) << endl ; // VS C++ 输出

	int test = 1;
	test = test + 5;

	cout << (test) << endl; 

						  
						  
	/*1   --二进制 与十进制的区别 
	1+1 = 2   

	01 + 01   10

	1+ 1 +1 =3 
	01 + 1 =10 
	10 + 1 = 11
	1	+5  =6
	01	+1 +1 +1 +1 +1 =  10 +1 + 1 + 1 +1  = 11 +1 + 1+ 1 =  100 +1 + 1  = 101 +1 =  110
	*/

    return 0;
}