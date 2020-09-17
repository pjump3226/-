#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector<pair<int, int>> v;
int arr[51][51];


int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 2) {
				v.push_back(make_pair(i, j));
			}
		}
	}
	for (int i = 0; i < v.size() -1; i++) {
		for (int j = i + 1; j < v.size(); j++) {
			
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			
		}
	}
	return 0;
}