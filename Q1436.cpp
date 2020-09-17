#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int num = 1666;
	int count = 1;
	string s;
	if (n == 1) {
		cout << 666 << '\n';
	}
	else {
		while (1) {
			s = to_string(num);
			if (s.find("666") != -1) {
				count++;
			}
			if (n == count) break;
			num++;
		}
		cout << num << '\n';
	}
	return 0;
}