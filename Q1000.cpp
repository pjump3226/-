#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t, x1, y1, x2, y2;
	int result;
	int r1, r2;
	cin >> t;
	for(int i=0; i<t; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double l = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
		if (x1 == x2 && y1 == y2)
			if (r1 == r2)
				result = -1;
			else result = 0;
		else if (abs(r1-r2)<l && abs(r1+r2)>l)
			result = 2;
		else if (abs(r1-r2)==l || abs(r1+r2)==l)
			result = 1;
		else
			result = 0;

		cout << result << '\n';
	}
	return 0;
}
