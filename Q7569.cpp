#include <iostream>
#include <queue>
using namespace std;
int arr[101][101][101];
bool visited[101][101][101];
queue<int> q;
int h, n, m;

int bfs(int days, int num) {
	int count = num;
	for (int k = 0; k < h; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j][k] == 1) {
					q.push(i);
					q.push(j);
					q.push(k);
					visited[i][j][k] = 1;
				}
					
			}
		}
	}
	while (!q.empty()) {
		int size = q.size()/3;
		for (int i = 0; i < size; i++) {
			int n1 = q.front();
			q.pop();
			int m1 = q.front();
			q.pop();
			int h1 = q.front();
			q.pop();
			if (n1 + 1 <= n-1 && arr[n1 + 1][m1][h1] == 0 && !visited[n1 + 1][m1][h1]) {
				arr[n1 + 1][m1][h1] = 1;
				visited[n1+1][m1][h1] = 1;
				num--;
				q.push(n1+1); q.push(m1); q.push(h1);
			}
			if (n1 - 1 >= 0 && arr[n1 - 1][m1][h1] == 0 && !visited[n1 - 1][m1][h1]) {
				arr[n1 - 1][m1][h1] = 1;
				visited[n1 - 1][m1][h1] = 1;
				num--;
				q.push(n1 - 1); q.push(m1); q.push(h1);
			}
			if (m1 + 1 <= m-1 && arr[n1][m1 + 1][h1] == 0 && !visited[n1][m1 + 1][h1]) {
				arr[n1][m1 + 1][h1] = 1;
				visited[n1][m1 + 1][h1] = 1;
				num--;
				q.push(n1); q.push(m1 + 1); q.push(h1);
			}
			if (m1 - 1 >= 0 && arr[n1][m1 - 1][h1] == 0 && !visited[n1][m1 - 1][h1]) {
				arr[n1][m1 - 1][h1] = 1;
				visited[n1][m1 - 1][h1] = 1;
				num--;
				q.push(n1); q.push(m1 - 1); q.push(h1);
			}
			if (h1 + 1 <= h-1 && arr[n1][m1][h1 + 1] == 0 && !visited[n1][m1][h1 + 1]) {
				arr[n1][m1][h1 + 1] = 1;
				visited[n1][m1][h1 + 1] = 1;
				num--;
				q.push(n1); q.push(m1); q.push(h1 + 1);
			}
			if (h1 - 1 >= 0 && arr[n1][m1][h1 - 1] == 0 && !visited[n1][m1][h1 - 1]) {
				arr[n1][m1][h1 - 1] = 1;
				visited[n1][m1][h1 - 1] = 1;
				num--;
				q.push(n1); q.push(m1); q.push(h1 - 1);
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
	cin >> m >> n >> h;
	for (int k = 0; k < h; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j][k];
				if (arr[i][j][k] == 0) {
					val = false;
					num++;
				}
			}
		}
	}
	if (val) cout << "0" << '\n';
	else {
		cout << bfs(0 , num) << '\n';
	}
	return 0;
}