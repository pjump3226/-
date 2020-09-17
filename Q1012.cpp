#include <iostream>
#include <stack>
using namespace std;
bool arr[51][51];
bool visited[51][51];

void dfs(int r, int c) {
	visited[r][c] = 1;
	if (arr[r - 1][c] && !visited[r - 1][c])
		dfs(r - 1, c);
	if (arr[r + 1][c] && !visited[r + 1][c])
		dfs(r + 1, c);
	if (arr[r][c-1] && !visited[r][c-1])
		dfs(r, c-1);
	if (arr[r][c+1] && !visited[r][c+1])
		dfs(r, c+1);
}


int main() {
	int t;
	cin >> t;
	int m, n, k;
	int f, l;
	int count = 0;
	for (int i = 0; i < t; i++) {
		count = 0;
		stack<int> s1;
		stack<int> s2;
		cin >> m >> n >> k;
		for (int j = 0; j < k; j++) {
			cin >> f >> l;
			arr[l][f] = 1;
			s1.push(l);
			s2.push(f);
		}
		for (int j = 0; j < k; j++) {
			f = s1.top();
			l = s2.top();
			if (!visited[f][l]) {
				dfs(f, l);
				count++;
			}
			s1.pop();
			s2.pop();
		}
		cout << count << '\n';
		for (int j = 0; j < 52; j++) {
			for (int o = 0; o < 52; o++) {
				arr[j][o] = 0;
				visited[j][o] = 0;
			}
		}
	}
	return 0;
}