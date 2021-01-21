#include <iostream>
using namespace std;
long long cost[100000];
long long dist[100001];


int main() {
	int n;
	int cur = 1000000001;
	long long sum = 0;
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		cin >> dist[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> cost[i];
		if (cur > cost[i]) cur = cost[i];
		if (i < n-1) {
			sum += dist[i]*cur;
		}
	}
	cout << sum << '\n';
	return 0;
}