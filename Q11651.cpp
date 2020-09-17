#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class coord {
public:
	int x;
	int y;
};

bool cmp(coord a, coord b) {
	if (a.y == b.y) {
		return a.x < b.x;
	}
	else return a.y < b.y;
}

int main() {
	int n;
	cin >> n;
	vector<coord> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].x >> v[i].y;
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < n; i++) {
		cout << v[i].x << " " << v[i].y << '\n';
	}
	return 0;
}