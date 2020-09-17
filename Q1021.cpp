#include <iostream>
#include <deque>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	deque<int> dq;
	deque<int> ob;
	int count = 0;
	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		ob.push_back(num);
	}
	while (ob.size() != 0) {
		int num = ob.front();
		if (dq.front() == num) {
			dq.pop_front();
			ob.pop_front();
		}
		else {
			int c1 = 0;
			int c2 = 0;
			deque<int> test1 = dq;
			deque<int> test2 = dq;
			while (test1.front() != ob.front()) {
				test1.push_back(test1.front());
				test1.pop_front();
				c1++;
			}
			while (test2.front() != ob.front()) {
				test2.push_front(test2.back());
				test2.pop_back();
				c2++;
			}
			if (c1 <= c2) {
				dq = test1;
				count += c1;
			}
			else {
				dq = test2;
				count += c2;
			}
		}
	}
	cout << count << '\n';
	return 0;
}