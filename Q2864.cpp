#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	string min_a, min_b;
	string max_a, max_b;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++) {
		if (a.at(i) == '5' || a.at(i) == '6') {
			min_a += '5';
			max_a += '6';
		}
		else {
			min_a += a.at(i);
			max_a += a.at(i);
		}
	}
	for (int i = 0; i < b.size(); i++) {
		if (b.at(i) == '5' || b.at(i) == '6') {
			min_b += '5';
			max_b += '6';
		}
		else {
			min_b += b.at(i);
			max_b += b.at(i);
		}
	}
	cout << atoi(min_a.c_str()) + atoi(min_b.c_str())
		<< " " << atoi(max_a.c_str()) + atoi(max_b.c_str()) << '\n';
	return 0;
}