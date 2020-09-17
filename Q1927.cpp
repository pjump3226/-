#include <iostream>
#include <queue>
using namespace std;

template <class T> struct absolute {
	bool operator() (const T& x, const T& y) const { 
		if(abs(x)==abs(y)) return x > y;
		else {
			return abs(x) > abs(y);
		}
	}
	typedef T first_argument_type;
	typedef T second_argument_type;
	typedef bool result_type;
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	priority_queue<int, vector<int>, absolute<int>> q;
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
		else q.push(x);
	}
	return 0;
}