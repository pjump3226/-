#include <iostream>
#include <string>
using namespace std;

int main() {
	int arr[8];
	string result;
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	if (arr[0] == 1) {
		bool val1 = true;
		for (int j = 0; j < 7; j++) {
			if (arr[j] > arr[j + 1]) val1 = false;
		}
		if (val1) result = "ascending";
		else result = "mixed";
	}
	else if (arr[0] == 8) {
		bool val2 = true;
		for (int j = 0; j < 7; j++) {
			if (arr[j] < arr[j + 1]) val2 = false;
		}
		if (val2) result = "descending";
		else result = "mixed";
	}
	else
		result = "mixed";
	cout << result << '\n';
	return 0;
}