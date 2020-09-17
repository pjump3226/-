#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string arr[1000];

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		for (int j = i; j < s.size(); j++) {
			arr[i] += s.at(j);
		}
	}
	sort(arr, arr + s.size());
	for (int i = 0; i < s.size(); i++) {
		cout << arr[i] << '\n';
	}
	return 0;
}