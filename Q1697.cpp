#include <iostream>
#include <queue>
using namespace std;
bool visited[200001];
queue<int> q;

void bfs(int v, int object) {
	int count = 0;
	int node = v;
	bool val = true;
	if (node == object) 
		cout << count << '\n';
	else {
		visited[v] = 1;
		q.push(v);
		while (!q.empty()) {
			int size = q.size();
			for (int i = 0; i < size; i++) {
				node = q.front();
				q.pop();
				if (node == object) {
					cout << count << '\n';
					val = false;
					break;
				}
				if (!visited[node - 1] && (node-1)>=0) {
					visited[node - 1] = 1;
					q.push(node - 1);
				}
				if (!visited[node + 1] && node+1<=100000) {
					visited[node + 1] = 1;
					q.push(node + 1);
				}
				if (!visited[node * 2] && node*2<=100000) {
					visited[node * 2] = 1;
					q.push(node * 2);
				}
			}
			if (!val) break;
			count++;
		}
	}
}


int main() {
	int n, k;
	cin >> n >> k;
	bfs(n, k);
	return 0;
}