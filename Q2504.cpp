#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> s;

int main() {
	string str;
	int result = 0;
	int temp = 1;
	bool val = 0;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		char c = str.at(i);
		if (c == '(') {
			temp *= 2;
			s.push(c);
		}
		else if (c == '[') {
			temp *= 3;
			s.push(c);
		}
		else if (c==')'){
			if (s.empty() || s.top()!='(') {
				val = true;
				break;
			}
			if (str.at(i - 1) == '(') {
				result += temp;
			}
			s.pop();
			temp /= 2;
		}
		else {
			if (s.empty()  || s.top() != '[') {
				val = true;
				break;
			}
			if (str.at(i - 1) == '[') {
				result += temp;
			}
			s.pop();
			temp /= 3;
		}
	}
	if (val || !s.empty()) cout << 0 << '\n';
	else cout << result << '\n';
	
	return 0;
}