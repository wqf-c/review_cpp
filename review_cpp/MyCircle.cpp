#include "MyCircle.h"
#include<iostream>
using namespace std;
void MyCircle::setR(double r) {
	this->r = r;
}
double MyCircle::getR() {
	return this->r;
}
double MyCircle::getArea() {
	return 3.14*r*r;
}

MyCircle::MyCircle()
{
	cout << "无参构造函数" << endl;
}

MyCircle::MyCircle(double r) {
	cout << "有参构造函数" << endl;
	this->r = r;
}
//彻底解决浅拷贝问题，还要重载=运算符

MyCircle::MyCircle(const MyCircle &circle) {
	this->r = circle.r;
	this->len = circle.len;
	this->p = (char *)malloc(len * sizeof(char));
	cout << "拷贝构造函数" << endl;
}

MyCircle::~MyCircle() {
	if (this->p != NULL) {
		free(this->p);
	}
	cout << "析构函数" << endl;
}
