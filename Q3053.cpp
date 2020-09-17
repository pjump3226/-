#include <iostream>
#include <cmath>
using namespace std;
const double pi = acos(-1);

int main() {
	double r;
	cin >> r;
	double s1 = r * r * pi;
	double s2 = 2 * r * r;
	cout << fixed;
	cout.precision(6);
	cout << s1 << '\n' << s2 << '\n';
	return 0;
}