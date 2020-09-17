#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	while (1) {
		if (q.size() == 1) break;
		q.pop();
		int num = q.front();
		q.pop();
		q.push(num);
	}
	cout << q.front() << '\n';
	return 0;
}