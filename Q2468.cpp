#include <iostream>
#include <queue>
using namespace std;
int arr[100][100];
queue<pair<int, int>> q;
int n;

int bfs(int h) {
	bool visited[100][100] = { 0, };
	int area = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j] && arr[i][j] > h) {
				q.push(make_pair(i,j));
				visited[i][j] = 1;
				area++;
				while (!q.empty()) {
					int num = q.size();
					for (int k = 0; k < num; k++) {
						int r, c;
						r = q.front().first;
						c = q.front().second;
						q.pop();
						if (r - 1 >= 0 && arr[r - 1][c] > h && !visited[r - 1][c]) {
							visited[r - 1][c] = 1;
							q.push(make_pair(r - 1, c));
						}
						if (r + 1 < n && arr[r + 1][c] > h && !visited[r + 1][c]) {
							visited[r + 1][c] = 1;
							q.push(make_pair(r + 1, c));
						}
						if (c - 1 >= 0 && arr[r][c - 1] > h && !visited[r][c - 1]) {
							visited[r][c - 1] = 1;
							q.push(make_pair(r, c - 1));
						}
						if (c + 1 < n && arr[r][c + 1] > h && !visited[r][c + 1]) {
							visited[r][c + 1] = 1;
							q.push(make_pair(r, c + 1));
						}
					}
				}
			}
		}
	}
	return area;

}

int main() {
	int m = 0;
	int num;
	int max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	for (int i = 0; i < max; i++) {
		num = bfs(i);
		if(m< num) m = num;
	}
	cout << m << '\n';
	return 0;
}