#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	if (x > y) {
		if (w - x > y) {
			if (h - y > y) cout << y << '\n';
			else cout << h-y << '\n';
		}
		else {
			if (h - y > w-x) cout << w-x << '\n';
			else cout << h - y << '\n';
		}
	}
	else {
		if (w - x > x) {
			if (h - y > x) cout << x << '\n';
			else cout << h-y << '\n';
		}
		else {
			if (h - y > w - x) cout << w - x << '\n';
			else cout << h - y << '\n';
		}
	}
	return 0;
}