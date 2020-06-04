#include<algorithm>
#include<numeric>
#include<iostream>
#include<vector>
#include<iterator>
#include<string>

using namespace std;

void elimDups(vector<string>& vec) {
	sort(vec.begin(), vec.end());
	auto end_t = unique(vec.begin(), vec.end());
	vec.erase(end_t, vec.end());
}

//不加const报错
bool isShorted(const string &s1, const string &s2) {
	return s1.size() < s2.size();
}

bool sortSize(const string &s1) {
	return s1.size() > 5;
}

int main() {
	vector<int> vi{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto sum = accumulate(vi.cbegin(), vi.cend(), 0);
	cout << sum << endl;

	vector<double> vd{ 1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 8.1, 9.1 };
	//auto sum2 = accumulate(vi.cbegin(), vi.cend(), 0);
	//cout << sum2 << endl;

	char p1[] = "abcdef";
	char p2[] = "abcdefg";
	//auto res = equal(begin(p1), end(p1), begin(p2));
	//cout << res << endl;
	//fill(vi.begin(), vi.end(), 0);
	/*vector<int>vi2;
	auto it = back_inserter(vi2);
	*it = 42;
	cout << vi2.size() << endl;
	fill_n(back_inserter(vi2), 10, 0);
	for (auto it = vi2.cbegin(); it != vi2.cend(); ++it) {
		cout << *it << endl;
	}
	auto it1 = vi.begin();
	for (int i = 0; it1 + i != vi.end(); ++i) {
		fill_n(it1, i, 0);
	}
	for (; it1 != vi.end(); ++it1) {
		cout << *it1 << endl;
	}*/

	vector<string> words{"a", "b", "c"};
	//稳定排序，不改变原来的先后顺序
	stable_sort(words.begin(), words.end(), isShorted);
	vector<string> vs{ "aaa", "aaaaaa", "aaaa" };
	partition(vs.begin(), vs.end(), sortSize);
	for (auto it = vs.cbegin(); it != vs.cend(); ++it) {
		cout << (*it).c_str() << endl;
	}

}