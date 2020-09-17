#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int count = 1;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if (str.at(i) == ' ' && i!=0 && i!=str.size()-1) count++;
	}
	if (str == " ") cout << 0 << "\n";
	else cout << count << '\n';
	return 0;
}