#include <iostream>
using namespace std;

int main() {
	int arr[42] = { 0, };
	int count = 0;
	for (int i = 0; i < 10; i++) {
		int n;
		cin >> n;
		int left = n % 42;
		arr[left]++;
	}
	for (int i = 0; i < 42; i++) {
		if (arr[i] == 0) count++;
	}
	cout << 42 - count << '\n';
	return 0;
}