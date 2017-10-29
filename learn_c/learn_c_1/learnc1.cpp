// learnc1.cpp: 定义控制台应用程序的入口点。

#include "stdafx.h"
#include <iostream>
#define str 1.5 //宏  --替换 --弱类型
//#define LENGTH 10.5
#define LENGTH str
//添加头文件
//c++ api手册  官网文档：http://www.cplusplus.com
using namespace std; //告诉编译器使用 std 命名空间，不调用的话，每次cout函数就必须要加上前缀命名空间(std::cout)，不然编译器报错，找不到该函数




/*周末第一次作业_答案*/
// * 1.用函数名为 calculateAreaSquare写一个计算矩形面积的c++函数, 
//要求: 传入参数(即传参)长度,宽度, 本函数有返回值, 返回矩形面积; 
//在main函数里完成调用本函数的操作,并在main函数中输出矩形面积.
int calculateAreaSquare(int length, int width) {
	int sq = length * width;
	return sq;
}


// * 2.用函数名为  calculateAreaCircle写一个计算圆形面积的c++函数, 
//要求: 传参半径, 有返回值,返回圆形面积; 在main函数里调用calculateAreaCircle, 并把题目1的矩形面积作为半径值传入本函数, 
//并在main函数中输出圆形面积.
float calculateAreaCircle(int r) {
	const float pai = 3.14;//π作为一个常量数值,不应该再被修改,就可以使用const来修饰,避免后面程序不小心把pai重新赋值了.
	float area = pai*r*r;
	return area;
}


//*3.用函数名 coutFive写一个函数, 要求输出打印乘法表的图案 如下
//1 * 1 = 1
//1 * 2 = 2     2 * 2 = 4
//1 * 3 = 3     2 * 3 = 6     3 * 3 = 9
//1 * 4 = 4     2 * 4 = 8     3 * 4 = 12    4 * 4 = 16
//1 * 5 = 5     2 * 5 = 10   3 * 5 = 15    4 * 5 = 20  5 * 5 = 25

void coutFive() {
	int count = 5;
	for (int i = 1; i <= count; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "="<<i*j<<"  ";
			if (i == j) {
				cout << endl;
			}
		}
	}
}


//*4.用函数名 changeNumber写一个函数, 要求: 以自己的出生年份, 比如1996, 分别得到个位数, 千位数, 并分别赋值给a, b, 
//然后输出a, b的值; 然后实现a, b的值交换(即把a的值传给b, b的值传给a), 再输出a, b的结果.
void changeNumber() {
	cout << "请输入你的出生年份:" << endl;
	int year;
	cin >> year;
	int a = year % 10; //得到个位数
	int b = year / 1000; //得到千位数
	cout << "交换前:a,=" << a << " b = " << b << endl;
	int temp = b;
	b = a;
	a = temp;
	cout << "交换后:a,=" << a << " b = " << b << endl;
	//思考 使用不需要临时变量temp作为介质的 交换方法.
}



//*5.自定义一个函数, 函数名自取, 要求: 获取控制台用户输入的两个正整数, 并计算两个数的最大公约数和最小公倍数之和, 并输出结果.
//tips :
//	使用cin 获取控制台的用户数据输入值.如下 :
//	int a;
//cin >> a; //用户输入的数值赋值给了变量a;

void theFiveth() {
	int a, b;
	cout << "请输入正整数a:" << endl;
	cin >> a;
	cout << "请输入正整数b:" << endl;
	cin >> b;
	int min = a > b ? b : a; //得到两个数的最小数
	int max = a < b ? b : a;//得到两个数的最大数

	int i = 1;
	int result;
	while (i <= min) {
		if (max%i == 0 && min%i == 0) {
			result = i;
		}
		i++;
	}
	cout << "得到最大公约数: " << result << endl;

	i = max;
	while (true) {
		if (i%max == 0 && i%min == 0) {
			result = i;
			break;
		}
		i++;
	}
	cout << "得到最小公倍数:" << result << endl;
}


void c1_HomeWorkAnswer() {
	int area = calculateAreaSquare(2, 4);
	cout << "矩形面积:" << area << endl;
	float circleArea = calculateAreaCircle(area);
	cout << "圆形面积:" << circleArea << endl;
	coutFive();
	changeNumber();
	theFiveth();
}


// 命名规则/规范  推荐 匈牙利命名法
int g_iGlobalTest = 99; //全局变量
/*
return_type(void ,int,boolean ) function_name( parameter list )
{
body of the function
}
*/
float testSwitchFunction(int i) {
	cout <<"testSwitchFunction i =" << i << endl;
	printf("testSwitchFunction i");
	switch (i)
	{
	case 1:
		cout << " case 1 " << endl;
		switch (i+1)
		{
		case 2:
			cout << "case i+1" << endl;
		default:
			break;
		}
		break;
	case 2:
		cout << " case 2 " << endl;
		break;
	case 3:
		cout << " case 3 " << endl;
		break;
	default:	
		cout << " case default " << endl;
		break;
	}
	cout << " switch !!" << endl;
	return 1.5;
}


void testLoopFunction() {
	int i = 1;
	for (i = 1; i <= 5; i++) {
		cout << "23  i  = " << i << endl;
	}
	cout << "for end!" << endl;
	cout << "i = " << i << endl; //6
	
	i = 1;
	for (i = 1; i <= 5; ++i) {
		cout << "30  i  = " << i << endl; 
		if (i == 3) {
			//break;
			continue;
		}
	}

	cout << "i = " << i << endl; //6

	int j = 0;
	while (i <= 1100) { //嵌套循环
		

		for (i = 1; i <= 5; ++i) {
			cout << "30  i  = " << i << endl;
			while (i <= 1100) {

			}
		}
	}
	cout << "31  i = " << i << endl;

	//
	for (; ; )
	{
		printf("This loop will run forever.\n");
	}
	while (true)
	{
		printf("This loop will run forever.\n");
	}
}

void testPriorityFunction() {
	int a = 20;
	int b = 10;
	int c = 15;
	int d = 5;
	int e;
	e = (a + b) * c / d ;
	cout << "e = " << e << endl;
}

void testOperationFunction() {
	g_iGlobalTest++; //效果等同于_iGlobalTest = _iGlobalTest + 1;
	cout << "g_iG" << g_iGlobalTest<<endl;
	g_iGlobalTest--; // 效果等同于_iGlobalTest = _iGlobalTest-1
	cout << "g_iG" << g_iGlobalTest << endl;

	int _i_test1 = 109;


	//! 非运算符 , 用来逆转操作数的逻辑状态
	if (!(_i_test1 < g_iGlobalTest))  {
		////如果为真 为true 则执行下面语句
		//....
		cout << "  < 为真" << endl;
	}else{
		////如果不为真 不为true 则执行下面语句
		//....
		cout <<  "  < bu为真" << endl;
	}

	_i_test1 < g_iGlobalTest ? (cout << " ? 为真" << endl) : (cout << "  ? bu为真" << endl);





	// &&与运算符。如果两个操作数都非零，则条件为真
	if (!(_i_test1 < g_iGlobalTest) && !(_i_test1 == g_iGlobalTest)) {
		cout << " && 为真" << endl;
	}
	else {
		cout << "&& bu为真" << endl;
	}

	//|| 或运算符。如果两个操作数中有任意一个非零，则条件为真。
	if (_i_test1 > g_iGlobalTest || _i_test1 == g_iGlobalTest) {
		cout <<  " ||为真" << endl;
	}
	else {
		cout << "  || bu为真" << endl;
	}


}


void testFunction() 
{
	//dddd
	#define str_1 9.2;
	int g_iGlobalTest = str; //局部变量
	int _iGlobalTest = 3;
	_iGlobalTest++; //效果等同于_iGlobalTest = _iGlobalTest + 1 = _iGlobalTest += 1;
	_iGlobalTest *= 3; //效果等于 _iGlobalTest = _iGlobalTest * 3;
	_iGlobalTest++;
	_iGlobalTest--; // 效果等同于_iGlobalTest = _iGlobalTest-1


	float _f_globalTest = 3.6;
	g_iGlobalTest = _f_globalTest;
	const int  c_int1 = 3.14159; //您可以使用 const 前缀声明指定类型的常量

	cout << " 27 _f_globalTest = " << _f_globalTest << endl;
	cout << " 16 g_iGlobalTest = " << g_iGlobalTest << endl;
	g_iGlobalTest = g_iGlobalTest + g_iGlobalTest;
	cout << " 18 g_iGlobalTest = " << g_iGlobalTest << endl;
	cout << "str = " << str << endl; 
	cout << "LENGTH = " << LENGTH << endl;
	cout << "举个栗子 "<< endl;
}

// main() 是程序开始执行的地方
int main() //程序入口
{ //代码块


	//上周的作业答案,供参考之用,其实答案不唯一的, 可以有很多种解题方法
	c1_HomeWorkAnswer();
	return 0;




	int _i1 = 5;
	float _r_i = testSwitchFunction(_i1); //传参
	cout << "_r_i = " << _r_i << endl;
	return 0;

	testLoopFunction();

	testPriorityFunction();

	testOperationFunction();
	cout << "gggggg = " << g_iGlobalTest << endl;
	cout << "str_1 = " << str_1;
	testFunction(); //调用函数
	cout << " 30 g_iGlobalTest = " << g_iGlobalTest << endl;



	/*第一讲目标：
		1、介绍了c++和计算机语言的发展
		2、客户端和服务器的区别与介绍
		3、面向对象的编程思想的大概介绍
		4、计算机进制的大体介绍（二进制和十进制的区别）
		4、github，sourceTree，visaul studio的安装及使用
	*/

	//printf("hello world ! \n"); // VS C++ 输出
	//cout << "std c++ hello world ! " << endl; // c++ 标准化输出 
	int test1; //形式参数
	int //数据类型 弱类型/强类型  
		i  //变量;
		= 888; //常量 //数据初始化=赋值
	//cout << (i) << endl ; // VS C++ 输出

	cout << " i = " << i << endl;

	long int lt = 9;  //告诉电脑从内存里申请4个字节的大小的空间

	//int i;
	//int i2;
	//int i3;
	//int i, i1, i2, i3; //申明int变量

	i = 120;

	cout << "sizeof i = " << sizeof(i) << endl;

	cout << " \n\n\n\n等于 : " << i << endl; // \代表转义符

	float f = 1.5;
	//std::cout << "f : " << f << endl;

	double d = 1.55; //浮点数

	int test = 1;
	test = test + 51;

	//std::cout << (test) << std::endl; //endl 换行符 等同于 \n
	cout << "========== 分割线 ======== \n\n\n\n";

	//true
	//false

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
	//double a;
	//cout << "输入a:" << endl;
	//cin >> a;
	//double dx = (a + 4) / a;
	//double x = sqrt(dx); //使用api手册去查找函数如何调用
	//cout << " x = " << x << endl;
	//int int_x = (int)x; //类型强转
	//cout << " int_x = " << int_x << endl;


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