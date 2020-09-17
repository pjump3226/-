#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct member {
	int age;
	string name;
};

bool cmp(member a, member b) {
	if (a.age == b.age) return false;
	else return a.age < b.age;
}

int main() {
	int n;
	cin >> n;
	vector<member> v(n);
	int age;
	string name;
	for (int i = 0; i < n; i++) {
		cin >> v[i].age >> v[i].name;
	}
	stable_sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < n; i++) {
		cout << v[i].age  << " " << v[i].name<< '\n';
	}
	return 0;
}