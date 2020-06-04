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

//���ÿ������캯��
void display1(MyCircle circle) {
	cout << "display1" << endl;
	cout << circle.getArea() << endl;
	//���ÿ������캯��
	MyCircle c1 = circle;
	//���ÿ������캯��
	MyCircle c2(circle);
	cout << c1.getArea() << endl;
}

//g���� ����һ��Ԫ�� 
//����1 : �����ķ���ֵ��һ��Ԫ�� (�������͵�), ���ص���һ���µ���������(���Ի���������������copy���캯��)

//
//����2: �й� ���������ȥ����
//�������������  ��ʼ�� ����һ��ͬ���͵Ķ���, �������� ת����������
//�������������  ��ֵ�� ����һ��ͬ���͵Ķ���, �������� ������

//
//����ôд����,��Ʊ������Ĵ�ţ��:
//�Ҿ͸��㷵��һ���¶���(û������ ��������)
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
	//�����������ʼ��m ��ʱc++������ ֱ�Ӱ�������ת��m;(����) ������ת����������m
	MyCircle m = g();
	printf("��������,������,����������\n");
	cout << m.getR() << endl;;
}

void objplay4()
{
	//���������� ��ֵ�� m2��, ������������
	MyCircle m2(1);
	m2 = g();
	printf("��Ϊ����������=��m2, ��������,������\n");
	cout << m2.getR() << endl;;
}

int main10() {
	//display();
	MyCircle c1(5);
	display1(c1);
	return EXIT_SUCCESS;
}