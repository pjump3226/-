#include <iostream>
#include <math.h>
using namespace std;

void func(int n, int a, int b, int c)
{
	if (n == 1) {
		cout << a << " " << c << '\n';
	}
	else {
		func(n - 1, a, c, b);
		cout << a << " " << c << '\n';
		func(n - 1, b, a, c);
	}
}

int main() {
	int n ,num;
	cin >> n;
	num = (int)pow(2, n)-1;
	cout << num << '\n';
	func(n, 1, 2, 3);
	return 0;
}