#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct order {
	int first;
	int second;
};

bool cmp(order a, order b) {
	if (a.first == b.first) {
		return a.second < b.second;
	}
	else {
		return a.first < b.first;
	}
}

int main() {
	int n;
	cin >> n;
	vector<order> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << '\n';
	}
	return 0;
}