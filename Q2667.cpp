#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
bool arr[26][26];
bool visited[26][26];
int house[200];
queue<int> q;
int n;

int bfs(int r, int c) {
	visited[r][c] = 1;
	int num = 1;
	q.push(r);
	q.push(c);
	while (!q.empty()) {
		int size = q.size() / 2;
		for (int i = 0; i < size; i++) {
			int r1 = q.front();
			q.pop();
			int c1 = q.front();
			q.pop();
			if (r1 - 1 >= 0 && arr[r1 - 1][c1] && !visited[r1 - 1][c1]) {
				visited[r1 - 1][c1] = 1;
				q.push(r1 - 1); q.push(c1);
				num++;
			}
			if (r1 + 1 < n && arr[r1 +1][c1] && !visited[r1 + 1][c1]) {
				visited[r1 + 1][c1] = 1;
				q.push(r1 + 1); q.push(c1);
				num++;
			}
			if (c1 - 1 >= 0 && arr[r1][c1 - 1] && !visited[r1][c1 - 1]) {
				visited[r1][c1 - 1] = 1;
				q.push(r1); q.push(c1 - 1);
				num++;
			}
			if (c1 + 1 < n && arr[r1][c1 + 1] && !visited[r1][c1 + 1]) {
				visited[r1][c1 + 1] = 1;
				q.push(r1); q.push(c1 + 1);
				num++;
			}
		}
	}
	return num;
}


int main() {
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < n; j++) {
			arr[i][j] = s.at(j) - '0';
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] && !visited[i][j])
				house[count++] = bfs(i, j);
		}
	}
	sort(house, house + count);
	cout << count << '\n';
	for (int i = 0; i < count; i++) {
		if(house[i] != 0)
			cout << house[i] << '\n';
	}
	return 0;
}