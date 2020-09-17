#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int x1, x2, y1, y2;
		int n;
		int count = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;
		for (int j = 0; j < n; j++) {
			int cx, cy, r;
			cin >> cx >> cy >> r;
			if (((x1 - cx)*(x1 - cx) + (y1 - cy)*(y1 - cy)) < (r*r) &&
				((x2 - cx)*(x2 - cx) + (y2 - cy)*(y2 - cy)) < (r*r)) {
			}
			else {
				if (((x1 - cx)*(x1 - cx) + (y1 - cy)*(y1 - cy)) < (r*r)) {
					count++;
				}
				else if (((x2 - cx)*(x2 - cx) + (y2 - cy)*(y2 - cy)) < (r*r)) {
					count++;
				}
			}
		}
		cout << count << '\n';

	}
	return 0;
}