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
	cout << "�޲ι��캯��" << endl;
}

MyCircle::MyCircle(double r) {
	cout << "�вι��캯��" << endl;
	this->r = r;
}
//���׽��ǳ�������⣬��Ҫ����=�����

MyCircle::MyCircle(const MyCircle &circle) {
	this->r = circle.r;
	this->len = circle.len;
	this->p = (char *)malloc(len * sizeof(char));
	cout << "�������캯��" << endl;
}

MyCircle::~MyCircle() {
	if (this->p != NULL) {
		free(this->p);
	}
	cout << "��������" << endl;
}
