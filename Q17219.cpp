#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int n, m;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string address, password;
	map<string, string> mp;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> address >> password;
		mp[address] = password;
	}
	for (int i = 0; i < m; i++) {
		cin >> address;
		cout << mp[address] << '\n';
	}
	return 0;
}