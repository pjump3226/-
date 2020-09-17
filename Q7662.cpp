#include <iostream>
#include <map>
using namespace std;
int main() {
	long long t, k, num;
	char c;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k;
		multimap<long long, bool> m;
		for (int j = 0; j < k; j++) {
			cin >> c >> num;
			if (c == 'I') m.insert(make_pair(num, 1));
			else {
				if (!m.empty()) {
					if (num == 1) m.erase(--m.end());
					else m.erase(m.begin());
				}
			}
		}
		if (m.empty()) cout << "EMPTY" << '\n';
		else cout << (--m.end())->first << " " << m.begin()->first << '\n';
	}
	return 0;
}