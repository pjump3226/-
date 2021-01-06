#include <iostream>
using namespace std;

int MIN = 1000000001;
int MAX = -1000000001;
int n;
int arr[11];

void dfs(int add, int sub, int mul, int div, int cnt, int sum) {
	if (cnt == n) {
		if (sum > MAX) MAX = sum;
		if (sum < MIN) MIN = sum;
	}

	if (add > 0) dfs(add - 1, sub, mul, div, cnt + 1, sum + arr[cnt]);
	if (sub > 0) dfs(add, sub-1, mul, div, cnt + 1, sum - arr[cnt]);
	if (mul > 0) dfs(add, sub, mul-1, div, cnt + 1, sum * arr[cnt]);
	if (div > 0) dfs(add, sub, mul, div-1, cnt + 1, sum / arr[cnt]);
}

int main() {
	int oper[4];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> oper[i];
	}

	dfs(oper[0], oper[1], oper[2], oper[3], 1 ,arr[0]);
	
	cout << MAX << '\n' << MIN << '\n';
	return 0;
}