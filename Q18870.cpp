#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000000];
int result[1000000];

int main() {
	int n;
	int min=100000000;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (min < arr[i]) min = arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << '\n';
	}
	return 0;
}