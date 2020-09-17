#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[50];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	if (n % 2 == 0) cout << arr[0] * arr[n - 1] << '\n';
	else cout << arr[n / 2] * arr[n / 2] << '\n'; 
	return 0;
}