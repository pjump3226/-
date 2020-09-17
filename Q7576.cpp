#include <iostream>
#include <queue>
using namespace std;
int arr[1001][1001];
bool visited[1001][1001];
queue<int> q;
int n, m;

int bfs(int days, int num) {
	int count = num;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 1) {
				q.push(i);
				q.push(j);
				visited[i][j] = 1;
			}

		}
	}
	while (!q.empty()) {
		int size = q.size() / 2;
		for (int i = 0; i < size; i++) {
			int n1 = q.front();
			q.pop();
			int m1 = q.front();
			q.pop();
			if (n1 + 1 <= n - 1 && arr[n1 + 1][m1] == 0 && !visited[n1 + 1][m1]) {
				arr[n1 + 1][m1] = 1;
				visited[n1 + 1][m1] = 1;
				num--;
				q.push(n1 + 1); q.push(m1);
			}
			if (n1 - 1 >= 0 && arr[n1 - 1][m1] == 0 && !visited[n1 - 1][m1]) {
				arr[n1 - 1][m1] = 1;
				visited[n1 - 1][m1] = 1;
				num--;
				q.push(n1 - 1); q.push(m1);
			}
			if (m1 + 1 <= m - 1 && arr[n1][m1 + 1] == 0 && !visited[n1][m1 + 1]) {
				arr[n1][m1 + 1] = 1;
				visited[n1][m1 + 1] = 1;
				num--;
				q.push(n1); q.push(m1 + 1);
			}
			if (m1 - 1 >= 0 && arr[n1][m1 - 1] == 0 && !visited[n1][m1 - 1]) {
				arr[n1][m1 - 1] = 1;
				visited[n1][m1 - 1] = 1;
				num--;
				q.push(n1); q.push(m1 - 1);
			}
		}
		if (q.empty() && num) {
			days = -1;
			break;
		}
		else if (q.empty() && !num) {
			break;
		}
		days++;
	}
	return days;
}

int main() {
	bool val = true;
	int num = 0;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 0) {
				val = false;
				num++;
			}
		}
	}
	if (val) cout << "0" << '\n';
	else {
		cout << bfs(0, num) << '\n';
	}
	return 0;
}