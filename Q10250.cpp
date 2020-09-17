#include <iostream>
using namespace std;

int main() {
	int t, h, w, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		int count, floor;

		if (n%h == 0) {
			floor = h;
			count = n / h;
		}
		else {
			floor = n % h;
			count = n / h + 1;
		}
		cout << floor*100 + count << '\n';
	}
	return 0;
}