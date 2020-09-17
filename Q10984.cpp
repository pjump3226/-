#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int sumC = 0;
		double gpa = 0;
		for (int j = 0; j < n; j++) {
			int c;
			double g;
			cin >> c >> g;
			sumC += c;
			gpa += (g*c);
		}
		cout.fixed;
		cout.precision(2);
		cout << sumC << " " << gpa / sumC << '\n';
	}
	return 0;
}