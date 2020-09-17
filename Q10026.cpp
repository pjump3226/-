#include <iostream>
#include <string>
#include <queue>
using namespace std;
char arr[101][101][2]; 
bool visited[101][101][2];
queue<int> q;
int n;

void bfs(int r , int c, bool val) {
	visited[r][c][val] = 1;
	q.push(r);
	q.push(c);
	char cmp = arr[r][c][val];
	while (!q.empty()) {
		int size = q.size()/2;
		for (int i = 0; i < size; i++) {
			int r1 = q.front();
			q.pop();
			int c1 = q.front();
			q.pop();
			if (r1 - 1 >= 0 && arr[r1 - 1][c1][val]==cmp && !visited[r1 - 1][c1][val]) {
				visited[r1 - 1][c1][val] = 1;
				q.push(r1 - 1); q.push(c1);
			}
			if (r1 + 1 < n && arr[r1 + 1][c1][val]==cmp && !visited[r1 + 1][c1][val]) {
				visited[r1 + 1][c1][val] = 1;
				q.push(r1 + 1); q.push(c1);
			}
			if (c1 - 1 >= 0 && arr[r1][c1 - 1][val]==cmp && !visited[r1][c1 - 1][val]) {
				visited[r1][c1 - 1][val] = 1;
				q.push(r1); q.push(c1 - 1);
			}
			if (c1 + 1 < n && arr[r1][c1 + 1][val]==cmp && !visited[r1][c1 + 1][val]) {
				visited[r1][c1 + 1][val] = 1;
				q.push(r1); q.push(c1 + 1);
			}
		}
	}
}

int main() {
	cin >> n;
	string s;
	int count[2] = { 0, };
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < n; j++) {
			arr[i][j][0] = s.at(j);
			if (s.at(j) == 'G') {
				arr[i][j][1] = 'R';
			}
			else {
				arr[i][j][1] = s.at(j);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j][0]) {
				bfs(i, j, 0);
				count[0]++;
			}
			if (!visited[i][j][1]) {
				bfs(i, j, 1);
				count[1]++;
			}
		}
	}
	cout << count[0] << " " << count[1] << '\n';
	return 0;
}