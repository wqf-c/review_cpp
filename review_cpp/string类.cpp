#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


int mertain() {
	string s1 = "aaaa";
	string s2("bbbb");
	string s3 = s2;
	string s4(10, 'a');

	cout << s1 << endl;
	for (int i = 0; i < s2.length(); ++i) {
		cout << s2[i] << "  ";
	}

	cout << endl;

	for (string::iterator it = s3.begin(); it != s3.end(); ++it) {
		cout << *it << "  ";
	}
	cout << endl;

	//转c风格字符串
	const char *p = s1.c_str();
	cout << p << endl;

	char buf[10];
	s3.copy(buf, 3, 0);
	cout << buf << endl;
	string s5 = "1111";
	string s6 = "2222";
	s5 = s5 + s6;
	cout << s5 << endl;
	s5.append(s6);
	cout << s5 << endl;
	s1 = "wbm hello wbm 111  wbm 222  wbm 333 ";
	int offset = s1.find("wbm", 0);
	while (offset != string::npos)
	{
		cout << "offset:" << offset;
		offset = s1.find("wbm", offset + 1);
	}
	offset = s1.find("wbm", 0);
	while (offset != string::npos)
	{
		s1.replace(offset, 3, "WBM");
		offset = s1.find("wbm", offset + 1);
	}
	cout << s1 << endl;

	s1 = "hello1 hello2 hello1";
	string::iterator it = find(s1.begin(), s1.end(), '1');
	if (it != s1.end()) {
		s1.erase(it);
	}
	cout << s1 << endl;
	//全部删除
	s1.erase(s1.begin(), s1.end());
	cout << s1.length() << endl;

	s1 = "BBB";
	s1.insert(s1.length(), "CCC");
	cout << s1 << endl;
	s1 = "AAAbbb";
	//1函数的入口地址 2函数对象 3预定义的函数对象
	transform(s1.begin(), s1.end(), s1.begin(), toupper);
	cout << "s1:" << s1 << endl;
	transform(s2.begin(), s2.end(), s2.begin(), tolower);
	cout << s2 << endl;
	return EXIT_SUCCESS;
}