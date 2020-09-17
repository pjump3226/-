#include <iostream>
using namespace std;

int main() {
	int n=9;
	int count=1;
	int arr[9];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
			count = i+1;
		}
	}
	cout << max <<'\n' << count << '\n';

	return 0;
}