#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	int left = 1000;
	left -= n;
	for (int i = 0; i < 6; i++) {
		int coin;
		switch (i) {
		case 0: coin = 500; break;
		case 1: coin = 100; break;
		case 2: coin = 50; break;
		case 3: coin = 10; break;
		case 4: coin = 5; break;
		case 5: coin = 1; break;
		}
		count += left / coin;
		left -= (left / coin) * coin;
	}
	cout << count << '\n';
	return 0;
}