#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, temp;
	int j_c = 0, i_c = 0;
	cin >> s;
	for (int i = 0; i < s.size() - 2; i++) {
		temp = s.at(i);
		temp += s.at(i + 1);
		temp += s.at(i + 2);
		if (temp == "JOI") {
			j_c++;
		}
		else if (temp == "IOI") {
			i_c++;
		}
	}
	cout << j_c << '\n' << i_c << '\n';
	return 0;
}