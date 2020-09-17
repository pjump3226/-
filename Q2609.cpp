#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int gcf;
	int lcm;
	int count = 1;
	if (a >= b) {
		gcf = b;
		while (1) {
			if (a%gcf == 0 && b%gcf ==0)break;
			gcf--;
		}
		lcm = a;
		while (1) {
			if (lcm%b == 0 && lcm%a==0) break;
			lcm++;
		}
	}
	else {
		gcf = a;
		while (1) {
			if (a%gcf == 0 && b%gcf == 0)break;
			gcf--;
		}
		lcm = b;
		while (1) {
			if (lcm%a == 0 && lcm%b==0) break;
			lcm++;
		}
	}
	cout << gcf << '\n' << lcm << '\n';
	return 0;
}