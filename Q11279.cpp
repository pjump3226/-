#include <iostream>
#include <queue>
using namespace std;

int main() {
	priority_queue<int> q;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == 0) {
			if (q.empty()) cout << 0 << '\n';
			else {
				cout << q.top() << '\n';
				q.pop();
			}
		}
		else {
			q.push(x);
		}
	}
	return 0;
}