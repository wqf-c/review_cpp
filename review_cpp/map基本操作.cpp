#include <iostream>
using namespace std;
#include "map"
#include "string"
/*
��c++��������������������һ����map���ڲ��ǰ���key����ģ�
�ڶ�����unordered_map�������ڲ�������ģ�ʹ��hash��֯���ݵġ�
*/

struct CmpKeyLen{
	bool operator()(const string key1, const string key2) {
		return key1.length() > key2.length();
	}
};
int maqwrtin() {
	//1��map����ָ��less��Ϊ��Ĭ�ϱȽϺ���(����),����Ĭ�ϰ���ֵ��������
	// map<string, int> name_score_map;

	// 2�������Զ��壬���ռ�ֵ�������У�ע����� 
	// #include <functional> // std::greater
	// map<string, int, greater<string>> name_score_map;
	//�����Զ������ݽ������򣬱����ַ����ĳ���
	//map<string, int, CmpKeyLen> map2;

	//��������ַ��� ��ͬ
	//ǰ���ַ��� ����ֵΪpair<iterator,bool>	��key�Ѿ����� �򱨴�
	//	������									��key�Ѿ�����,���޸�		
	map<int, string> map1;
	pair<map<int, string>::iterator, bool> myPair1 = map1.insert(make_pair(1, "teacher1"));
	myPair1 = map1.insert(pair<int, string>(2, "teacher2"));
	myPair1 = map1.insert(map<int, string>::value_type(3, "teacher3"));
	myPair1 = map1.insert(map<int, string>::value_type(3, "teacher4"));
	if (!myPair1.second) {
		cout << "����ʧ��" << endl;
	}
	else {
		cout << "����ɹ�" << endl;
	}
	map1[4] = "teacher4";
	for (map<int, string>::iterator it = map1.begin(); it != map1.end(); it++) {
		cout << it->first << "\t" << it->second << endl;
	}

	//����Ԫ�ص�ɾ��
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
		cout << "δ���ҵ�" << endl;
	}

	pair<map<int, string>::iterator, map<int, string>::iterator>its = map1.equal_range(20);
	if (its.first != map1.end()) {
		//....
	}


	

	return EXIT_SUCCESS;
}