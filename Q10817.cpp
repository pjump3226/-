#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int mid;
	cin >> a >> b >> c;
	int arr[3];
	arr[0] = a, arr[1] = b, arr[2] = c;
	
	if (arr[0] < arr[1]) {
		int temp = arr[0];
		arr[0] = arr[1];
		arr[1] = temp;
	}
	if (arr[0] < arr[2]) {
		int temp = arr[0];
		arr[0] = arr[2];
		arr[2] = temp;
	}
	if (arr[1] < arr[2]) {
		int temp = arr[1];
		arr[1] = arr[2];
		arr[2] = temp;
	}
	

	cout << arr[1] << '\n';
	return 0;
}