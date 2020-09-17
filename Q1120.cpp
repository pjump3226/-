#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	int dif[50] = { 0, };
	int min = 50;
	cin >> s1 >> s2;
	for (int i = 0; i < s2.size() - s1.size() + 1; i++) {
		int cnt = 0;
		for (int j = 0; j < s1.size(); j++) {
			if (s1.at(j) != s2.at(i+j)) {
				cnt++;
			}
		}
		dif[i] = cnt;
		if (dif[i] < min) min = dif[i];
	}
	cout << min << '\n';
	return 0;
}