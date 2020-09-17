#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int arr[11];

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		arr[i] = s.at(i) - '0';
	}
	sort(arr, arr + s.size(), cmp);
	for (int i = 0; i < s.size(); i++) {
		cout << arr[i];
	}
	cout << '\n';
	return 0;
}