#include "iostream"
#include"MyCircle.h"
using namespace std;

void display() {
	MyCircle circle;
	circle.setR(2.0);
	cout << circle.getArea() << endl;
	MyCircle circle2(5);
	cout << circle2.getArea() << endl;
	MyCircle circle3(circle);
	cout << circle3.getArea() << endl;
}

//调用拷贝构造函数
void display1(MyCircle circle) {
	cout << "display1" << endl;
	cout << circle.getArea() << endl;
	//调用拷贝构造函数
	MyCircle c1 = circle;
	//调用拷贝构造函数
	MyCircle c2(circle);
	cout << c1.getArea() << endl;
}

//g函数 返回一个元素 
//结论1 : 函数的返回值是一个元素 (复杂类型的), 返回的是一个新的匿名对象(所以会调用匿名对象类的copy构造函数)

//
//结论2: 有关 匿名对象的去和留
//如果用匿名对象  初始化 另外一个同类型的对象, 匿名对象 转成有名对象
//如果用匿名对象  赋值给 另外一个同类型的对象, 匿名对象 被析构

//
//你这么写代码,设计编译器的大牛们:
//我就给你返回一个新对象(没有名字 匿名对象)
MyCircle g()
{
	MyCircle A(1);
	return A;
}

//
void objplay2()
{
	g();
}

//
void objplay3()
{
	//用匿名对象初始化m 此时c++编译器 直接把匿名对转成m;(扶正) 从匿名转成有名字了m
	MyCircle m = g();
	printf("匿名对象,被扶正,不会析构掉\n");
	cout << m.getR() << endl;;
}

void objplay4()
{
	//用匿名对象 赋值给 m2后, 匿名对象被析构
	MyCircle m2(1);
	m2 = g();
	printf("因为用匿名对象=给m2, 匿名对象,被析构\n");
	cout << m2.getR() << endl;;
}

int main10() {
	//display();
	MyCircle c1(5);
	display1(c1);
	return EXIT_SUCCESS;
}