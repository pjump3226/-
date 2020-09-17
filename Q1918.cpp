#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string s;
	cin >> s;
	stack<char> oper;
	s += '.';
	for (int i = 0; i < s.size(); i++) {
		char c = s.at(i);
		if (c == '*' || c == '/') {
			if (oper.empty()) {
				oper.push(c);
			}
			else {
				if (oper.top() == '*' || oper.top() == '/') {
					while (!oper.empty()) {
						if (oper.top() == '(' || oper.top() == '+' || oper.top() == '-')
							break;
						cout << oper.top();
						oper.pop();
					}
					oper.push(c);
				}
				else oper.push(c);
			}
		}
		else if (c == '+' || c == '-') {
			if (oper.empty()) {
				oper.push(c);
			}
			else {
				if (oper.top() == '(')
					oper.push(c);
				else {
					while (!oper.empty()) {
						if (oper.top() == '(' )
							break;
						cout << oper.top();
						oper.pop();
					}
					oper.push(c);
				}
			}
		}
		else if (c == '(')
			oper.push(c);
		else if (c == ')') {
			while (oper.top() != '(') {
				cout << oper.top();
				oper.pop();
			}
			oper.pop();
		}
		else if (c == '.') {
			while (!oper.empty()) {
				cout << oper.top();
				oper.pop();
			}
		}
		else cout << c;
	}
	cout << '\n';
	return 0;
}