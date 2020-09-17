#include <iostream>
using namespace std;

int main() {
	long long x, y, w, s, t;
	long long total = 0;
	cin >> x >> y >> w >> s;
	if (2 * w > s) {
		if (x > y) {
			total = y * s;
			x -= y;
			y = 0;
		}
		else {
			total = x * s;
			y -= x;
			x = 0;
		}
	}
	if (w > s) {
		t = x / 2;
		total += (t*2) * s;
		x -= t * 2;

		t = y / 2;
		total += (t*2) * s;
		y -= t * 2;
	}
	total += (x + y) * w;
	cout << total << '\n';
	return 0;
}