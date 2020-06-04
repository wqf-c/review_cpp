#include <iostream>
using namespace std;
#include "stack"

int maitgbn() {
	stack<int> s;
	for (int i = 0; i < 10; ++i) {
		s.push(i);
	}
	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}