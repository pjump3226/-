#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	stack<int> s;
	int arr[100001];
	vector<char> result;
	int index = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++) {
		s.push(i);
		result.push_back('+');
		while (!s.empty() && s.top()==arr[index]) {
			s.pop();
			result.push_back('-');
			index++;
		}
	}
	if (!s.empty()) cout << "NO" << '\n';
	else {
		for (int i = 0; i < result.size(); i++) {
			cout << result[i] << '\n';
		}
	}
	return 0;
}