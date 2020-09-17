#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int d, w, h;
	cin >> d >> w >> h;
	int ratio = w * w + h * h;
	double d2 = sqrt(ratio);
	cout << floor(d * w / d2) << " " << floor(d * h / d2) << '\n';
	return 0;
}