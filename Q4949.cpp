#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string s;
	while (getline(cin,s)) {
		stack<char> brackets;
		bool val = true;
		if (s == ".") break;
		for(int i=0; i<s.size(); i++) {
			char c = s.at(i);
			if (c=='(' || c=='[') {
				brackets.push(c);
			}
			else if (c==')' ) {
				if (brackets.empty()) {
					val = false;
				}
				else {
					if (brackets.top() != '(') val = false;
					else brackets.pop();
				}
			}
			else if (c == ']') {
				if (brackets.empty()) {
					val = false;
				}
				else {
					if (brackets.top() != '[') val = false;
					else brackets.pop();
				}
			}
		}
		if (val && brackets.empty()) cout << "yes" << '\n';
		else cout << "no" << '\n';
	}
	return 0;
}