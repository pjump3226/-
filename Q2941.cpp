#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int i = 0;
	int count = 0;
	while (1) {
		bool val = false;
		if (i == (str.size())) {
			break;
		}
		if (str.find("dz=",i) != -1) {
			if (i == str.find("dz=",i)) {
				i += 3; count++;
				val = true;
			}
		}
		if (str.find("c=",i) != -1) {

			if (i == str.find("c=",i)) {
				i += 2; count++;
				val = true;
			}
		}
		if (str.find("c-",i) != -1) {
			if (i == str.find("c-",i)) {
				i += 2; count++;
				val = true;
			}
		}
		if (str.find("d-",i) != -1) {
			if (i == str.find("d-",i)) {
				i += 2; count++;
				val = true;
			}
		}
		if (str.find("lj",i) != -1) {
			if (i == str.find("lj",i)) {
				i += 2; count++;
				val = true;
			}
		}
		if (str.find("nj",i) != -1) {
			if (i == str.find("nj",i)) {
				i += 2; count++;
				val = true;
			}
		}
	
		if (str.find("s=",i) != -1) {
			if (i == str.find("s=",i)) {
				i += 2; count++;
				val = true;
			}
		}

		if (str.find("z=",i) != -1) {
			if (i == str.find("z=",i)) {
				i += 2; count++;
				val = true;
			}
		}
		if (!val) {
			i += 1; count++;
		}
	}
	cout << count << '\n';
	return 0;
}