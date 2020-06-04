#include<stdio.h>

typedef void(*myTypePrint)();

void display(myTypePrint print) {
	print();
}

void print1() {
	printf("print1\n");
}

void print2() {
	printf("print2\n");
}

int maiertn() {
	typedef int(myTypeArray)[10];
	myTypeArray array;
	array[0] = 10;
	typedef int(*myArrayPointer)[10];
	myArrayPointer pointer = &array;
	(*pointer)[1] = 20;
	//定义一个指针
	int(*pointer2)[10];
	pointer2 = &array;
	*pointer2[2] = 30;
	for (int i = 0; i < 3; ++i) {
		printf("%d\n", array[i]);
	}

	display(print1);
	display(print2);
	return 0;
}