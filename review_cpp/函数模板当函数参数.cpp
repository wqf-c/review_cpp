#include<iostream>
using namespace std;

template <typename T>
int mySort(T *array, int size) {
	int i, j;
	T tmp;
	if (array == NULL) {
		return -1;
	}
	for (i = 0; i < size; ++i) {
		for (j = i + 1; j < size; ++j) {
			if (array[i] < array[j]) {
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
	}
	return 0;
}

template <typename T>
void myPrint(T *array, int size) {
	for (int i = 0; i < size; ++i) {
		cout << array[i] << "  ";
	}
	cout << endl;
}
void masdfgin() {
	int a[] = { 5, 4, 0, 2 };
	mySort(a, 4);
	myPrint(a, 4);
}

