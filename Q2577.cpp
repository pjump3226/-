#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	int num=7;
	int result;
	int arr[10] = { 0, };
	cin >> a >> b >> c;
	result = a * b * c;
	while (1) {
		if (result / (int)pow(10, num) == 0)
			break;
		num++;
	}
	for (int i = num-1; i >=0; i--) {
		int left = result / (int)pow(10, i);
		arr[left]++;
		result -= left * (int)pow(10, i);
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << '\n';
	}
	
	return 0;
}