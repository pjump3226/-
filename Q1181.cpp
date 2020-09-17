#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
	if (a.size() == b.size()) return a < b;
	else return a.size() < b.size();
}

int main() {
	int n;
	cin >> n;
	string s;
	string arr[20001];
	int index = 0;
	for (int i = 0; i < n; i++) {
		bool val = true;
		cin >> s;
		for (int j = 0; j < i; j++) {
			if (s == arr[j]) {
				val = false;
				break;
			}
		}
		if (val) arr[index++] = s;
	}
	sort(arr, arr + index, cmp);
	for (int i = 0; i < index; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}