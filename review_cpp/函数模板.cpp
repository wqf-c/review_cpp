#include<iostream>
using namespace std;

template<class T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

void mySwap(int a, int b) {
	cout << "��ͨ����" << endl;
}

int maioin() {
	int a = 0;
	int b = 10;
	char c = 'A';
	mySwap(a, b);
	//��ʾָ������
	mySwap<int>(a, b);
	//����ģ�岻֧����ʽ����ת��
	//mySwap(a, c);
	cout << a << b << endl;
	//�к������أ����ȵ�����ͨ����
	mySwap(10, 20);
	//ǿ�Ƶ���ģ�庯��
	mySwap<>(a, b);
	return 0;
}