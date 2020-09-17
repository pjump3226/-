#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	int count = 1;
	cout << "<";
	while (1) {
		if (q.empty()) break;
		else {
			if (count % k ==0) {
				if(q.size()!=1) cout << q.front() << ", ";
				else cout << q.front();
				q.pop();
			}
			else {
				q.push(q.front());
				q.pop();
			}
		}
		count++;
	}
	cout << ">" << '\n';
	return 0;
}