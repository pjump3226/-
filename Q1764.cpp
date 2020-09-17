#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
string arr[500001];
string brr[500001];

int main() {
	int n, m;
	int count = 0;
	cin >> n >> m;
	string s;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	map<string, bool> mp;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		mp[arr[i]] = 1;
	}

	for (int i = 0; i < m; i++) {
		cin >> s;
		if (mp[s] == 1) {
			brr[count++] = s;
		}
	}
	sort(brr, brr + count);
	cout << count << '\n';
	for (int i = 0; i < count; i++) {
		cout << brr[i] << '\n';
	}
	return 0;
}