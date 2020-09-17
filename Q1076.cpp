#include <iostream>
#include <string>
#include <math.h>
using namespace std;

enum Color{
	black, brown, red, orange, 
	yellow, green, blue, violet, 
	grey, white
};

int main() {
	Color color;
	string s;
	long long result=0;
	for (int i = 0; i < 3; i++) {
		cin >> s;
		if (s =="black") color = black;
		else if (s == "brown") color = brown;
		else if (s == "red") color = red;
		else if (s == "orange") color = orange;
		else if (s == "yellow") color = yellow;
		else if (s == "green") color = green;
		else if (s == "blue") color = blue;
		else if (s == "violet") color = violet;
		else if (s == "grey") color = grey;
		else if (s == "white") color = white;
		if (i == 0) result += color * 10;
		else if (i == 1)result += color;
		else result *= (long long)pow(10, (int)color);
	}
	cout << result << '\n';

	return 0;
}