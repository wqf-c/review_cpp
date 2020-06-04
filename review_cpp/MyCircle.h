#pragma once
class MyCircle
{
private:
	double r;
	int len;
	char *p;

public:
	void setR(double r);
	double getR();
	double getArea();
	MyCircle();
	MyCircle(double r);
	MyCircle(const MyCircle &circle);
	~MyCircle();
};

