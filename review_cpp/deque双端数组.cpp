#include <iostream>
using namespace std;
#include "deque"
#include "algorithm"

using namespace std;

int maiqwn() {
	deque<int> q1;
	q1.push_back(-20);
	q1.push_back(10);
	q1.push_back(20);
	q1.push_front(30);
	q1.push_front(40);
	q1.pop_back();
	q1.pop_front();
	for (int i = 0; i < q1.size(); ++i) {
		cout << q1[i] << endl;
	}

	for (deque<int>::iterator it = q1.begin(); it != q1.end(); ++it) {
		cout << *it << endl;
	}

	cout << q1.front() << endl;
	cout << q1.back() << endl;
	deque<int>::iterator it = find(q1.begin(), q1.end(), -20);
	if (it != q1.end()) {
		cout << "找到，下标为" << distance(q1.begin(), it) << endl;
	}

	return EXIT_SUCCESS;
}