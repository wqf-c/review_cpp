#include <iostream>
using namespace std;
#include "map"
#include "string"
/*
在c++中有两个关联容器，第一种是map，内部是按照key排序的，
第二种是unordered_map，容器内部是无序的，使用hash组织内容的。
*/

struct CmpKeyLen{
	bool operator()(const string key1, const string key2) {
		return key1.length() > key2.length();
	}
};
int maqwrtin() {
	//1、map这里指定less作为其默认比较函数(对象),就是默认按键值升序排列
	// map<string, int> name_score_map;

	// 2、可以自定义，按照键值升序排列，注意加载 
	// #include <functional> // std::greater
	// map<string, int, greater<string>> name_score_map;
	//按照自定义内容进行排序，比如字符串的长度
	//map<string, int, CmpKeyLen> map2;

	//插入的四种方法 异同
	//前三种方法 返回值为pair<iterator,bool>	若key已经存在 则报错
	//	方法四									若key已经存在,则修改		
	map<int, string> map1;
	pair<map<int, string>::iterator, bool> myPair1 = map1.insert(make_pair(1, "teacher1"));
	myPair1 = map1.insert(pair<int, string>(2, "teacher2"));
	myPair1 = map1.insert(map<int, string>::value_type(3, "teacher3"));
	myPair1 = map1.insert(map<int, string>::value_type(3, "teacher4"));
	if (!myPair1.second) {
		cout << "插入失败" << endl;
	}
	else {
		cout << "插入成功" << endl;
	}
	map1[4] = "teacher4";
	for (map<int, string>::iterator it = map1.begin(); it != map1.end(); it++) {
		cout << it->first << "\t" << it->second << endl;
	}

	//容器元素的删除
//	while (!map1.empty())
//	{
//		map<int, string>::iterator it = map1.begin();
//		cout << it->first << "\t" << it->second << endl;
//		map1.erase(it);
//	}
	map<int, string>::iterator it2 = map1.find(4);
	if (it2 != map1.end()) {
		cout << it2->first << "\t" << it2->second << endl;
	}
	else {
		cout << "未查找到" << endl;
	}

	pair<map<int, string>::iterator, map<int, string>::iterator>its = map1.equal_range(20);
	if (its.first != map1.end()) {
		//....
	}


	

	return EXIT_SUCCESS;
}