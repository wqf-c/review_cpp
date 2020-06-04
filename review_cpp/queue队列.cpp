#include <iostream>
using namespace std;
#include "queue"
#include "algorithm"

int maqwin() {
	queue<int> q;
	q.push(10);

	q.push(20);

	q.push(30);
	cout << q.front() << "  " << q.back() << endl;
	while (q.size() != 0)
	{
		cout << q.front() << endl;
		q.pop();
	}
	return 0;
}