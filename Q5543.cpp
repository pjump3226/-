#include <iostream>
using namespace std;

int main() {
	int num;
	int sum = 0;
	int min = 2000;
	for (int i = 0; i < 3; i++) {
		cin >> num;
		if (min > num) min = num;
	}
	sum += min;
	min = 2000;
	for (int i = 0; i < 2; i++) {
		cin >> num;
		if (min > num) min = num;
	}
	cout << sum + min - 50 << '\n';
	return 0;
}