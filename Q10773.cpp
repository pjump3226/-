#include <iostream>
#include <stack>
using namespace std;

int main() {
	int k;
	int sum = 0;
	int size;
	cin >> k;
	stack<int> s;
	for (int i = 0; i < k; i++) {
		int n;
		cin >> n;
		if (n == 0) s.pop();
		else s.push(n);
	}
	size = s.size();
	for (int i = 0; i < size; i++) {
		sum += s.top();
		s.pop();
	}
	cout << sum << '\n';
	return 0;
}