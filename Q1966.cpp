#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m;
		queue<int> q;
		queue<int> order;
		cin >> n >> m;
		int count = 0;
		int arr[100];
		int index = n-1;
		for (int j = 0; j < n; j++) {
			int priority;
			cin >> priority;
			arr[j] = priority;
			q.push(priority);
			order.push(j);
		}
		sort(arr, arr + n);
		while (1) {
			if (q.front() == arr[index]) {
				if (order.front() == m) break;
				q.pop();
				order.pop();
				index--;
				count++;
			}
			else {
				q.push(q.front());
				q.pop();
				order.push(order.front());
				order.pop();
			}
		}
		cout << count+1 << '\n';
	}
	return 0;
}