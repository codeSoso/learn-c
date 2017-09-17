// learnc1.cpp: 定义控制台应用程序的入口点。

#include "stdafx.h"
#include <iostream> 
//添加头文件
//c++ api手册  官网文档：http://www.cplusplus.com
using namespace std; //告诉编译器使用 std 命名空间，不调用的话，每次cout函数就必须要加上前缀命名空间(std::cout)，不然编译器报错，找不到该函数

// main() 是程序开始执行的地方
int main()
{

	/*第一讲目标：
		1、介绍了c++和计算机语言的发展
		2、客户端和服务器的区别与介绍
		3、面向对象的编程思想的大概介绍
		4、计算机进制的大体介绍（二进制和十进制的区别）
		4、github，sourceTree，visaul studio的安装及使用
	*/

	//printf("hello world ! \n"); // VS C++ 输出
	//cout << "std c++ hello world ! " << endl; // c++ 标准化输出 
	int //数据类型
		i //变量;
		= 4; //常量
	//cout << (i) << endl ; // VS C++ 输出

	int test = 1;
	test = test + 51;

	std::cout << (test) << std::endl; //endl 换行符 等同于 \n
	cout << "========== 分割线 ======== \n\n\n\n";

	/*1   
	二进制 与十进制的区别
	二进制数据是用0和1两个数码来表示的数。它的基数为2，进位规则是“逢二进一”

	10进制： 1+1 = 2   
	对应的2进制：01 + 01 = 10 （01+01的最低位1相加等于2，进位 ）

	10进制：3 
	对应的2进制：01 +01 +01 = 10 + 01 = 11

	10进制：5
	对应的2进制：01+01+01+01+01 = 10+01+01+01 = 11+01+01 = 100+1 = 101
	*/


	/*
		第二讲：回顾下二进制和十进制的理论，以及以前考试的笔算方法;更多方法可参考baidu
		讲解c++基础语法 
		从 http://www.runoob.com/cplusplus/cpp-basic-syntax.html C++ 程序结构 开始讲起
		到 http://www.runoob.com/cplusplus/cpp-functions.html 定义函数 结束
	*/

	/*int w;
	int h;
	int l;
	cout << "输入w:" << endl;
	cin >> w;
	cout << "输入h:" << endl;
	cin >> h;
	cout << "输入l:" << endl;
	cin >> l;
	int area = w*l;
	cout << "面积   = " << area << endl;
	cout << "体积   = " << w*h*l << endl;*/

	//vs2017默认编码方式并不是UTF - 8，当我们使用中文时，经常会发生乱码。
	//	解决方法：工具->扩展和更新->联机，然后搜索ForceUTF8

	//根据方程：a*x*x - a = 4 对x开根求解
	//思考，如果为0 情况如何？
	double a;
	cout << "输入a:" << endl;
	cin >> a;
	double dx = (a + 4) / a;
	double x = sqrt(dx); //使用api手册去查找函数如何调用
	cout << " x = " << x << endl;
	int int_x = (int)x; //类型强转
	cout << " int_x = " << int_x << endl;


	//例 求一元二次方程aX*X + bX + c = 0的根 
	//	求解步骤是：
	//	输入和保存三个系数a = 1, b = 2, c = 0；
	//	计算判别式的值并保存于d, d = b*b - 4ac
	//	计算   开根d  的值，保存在e中
	//	计算两个实根：x1 = (-b + e) / 2a 和x2 = (-b - e) / 2a
	//	输出x1, x2
	//	http://blog.csdn.net/jhq0113/article/details/8042375



    return 0;
}
