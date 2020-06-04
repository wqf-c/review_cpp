#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int mqazain() {
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(3);
	v1.push_back(3);
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
		cout << *it << endl;
	}

	//cout << count(v1.begin, v1.end, 3) << endl;
	return EXIT_SUCCESS;
}