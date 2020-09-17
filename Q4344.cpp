#include <iostream>
using namespace std;

int main() {
	int c;
	cin >> c;
	for (int i = 0; i < c; i++) {
		int n;
		int count = 0;
		double avg= 0;
		double ratio;
		cin >> n;
		int *arr = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
			avg += arr[j];
		}
		avg /= n;
		for (int j = 0; j < n; j++) {
			if (arr[j] > avg) count++;
		}
		ratio = (double)count / n;
		cout << fixed;
		cout.precision(3);
		cout << ratio*100  << "%"<< '\n';
	}
	return 0;
}