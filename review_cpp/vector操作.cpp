#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int mavgyin() {
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	vector<int> v2 = v1;
	vector<int> v3(v1.begin(), v1.begin() + 3);
	cout << v1.front() << endl;
	cout << v1.size() << endl;
	cout << v1.back() << endl;
	for (int i = 0; i < v1.size(); ++i) cout << v1[i];
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
		cout << *it << endl;
	}

	//�������
	for (vector<int>::reverse_iterator rit = v1.rbegin(); rit != v1.rend(); rit++)
	{
		cout << *rit << " ";
	}
	while (v1.size() > 0)
	{
		cout << "β��Ԫ��" << v1.back(); //��ȡβ��Ԫ��
		v1.pop_back(); //ɾ��β��Ԫ��
	}
	v2.insert(v2.begin(), 10);
	v2.insert(v2.begin(), 30);
	v2.erase(v2.begin());
	v2.erase(v2.begin(), v2.begin() + 2);
	v2[0] = 10;
	for (vector<int>::iterator it = v3.begin(); it != v3.end();) {
		if (*it == 2) {
			it = v3.erase(it);  //�� ɾ����������ָ���Ԫ�ص�ʱ��,eraseɾ����������it�Զ����ƶ�
		}
		else {
			it++;
		}
	}
	return 0;
}