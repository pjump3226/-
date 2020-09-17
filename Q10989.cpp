#include <iostream>
#include <algorithm>
using namespace std;
int arr[10001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int num;

	for (int i = 0; i < n; i++) {
		cin >> num;
		arr[num]++;
	}

	for (int i = 0; i <= 10000; i++) {
		if (arr[i]) {
			for(int j=0; j<arr[i]; j++)
				cout << i << '\n';
		}
	}
	return 0;
}