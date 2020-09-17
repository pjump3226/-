#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int t,n;
	cin >>t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		map<string, int> type;
		for (int j = 0; j < n; j++) {
			string s1, s2;
			cin >> s1 >> s2;
			if (type.find(s2) != type.end()) {
				type.find(s2)->second++;
			}
			else {
				type.insert(make_pair(s2, 1));
			}
		}
		map<string, int>::iterator iter;
		int answer = 1;
		for (iter=type.begin(); iter!=type.end(); iter++)
			answer *= iter->second + 1;
		cout << answer - 1 << '\n';
		type.clear();
	}

	return 0;
}