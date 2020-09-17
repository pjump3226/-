#include <iostream>
using namespace std;

int main() {
	char s[100];
	fill_n(s, 100, ' ');
	int order[26];
	fill_n(order, 26, -1);
	cin >> s;
	for (int i = 0; i < 100; i++) {
		if (s[i] == ' ') break;
		if (order[s[i] - 'a'] == -1) order[s[i] - 'a'] = i;
	}
	for (int j = 0; j < 26; j++) {
		//if(j != 25)
		cout << order[j] << " ";
		//else cout << order[j];
	}
	cout << '\n';
	return 0;
}