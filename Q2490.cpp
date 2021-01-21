#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		bool yut[4];
		int cnt = 0;
		for (int j = 0; j < 4; j++) {
			cin >> yut[j];
			if (yut[j])cnt++;
		}
		cnt != 4 ? cout << (char)('D' - cnt) : cout << 'E';
		cout << '\n';
	}
	return 0;
}