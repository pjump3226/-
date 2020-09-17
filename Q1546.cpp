#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int *arr = new int[n];
	double avg = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		avg += arr[i];
	}
	avg /= n;
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	cout<<fixed;
	cout.precision(3);
	cout << (double)((avg / max) * 100) << '\n';
	return 0;
}