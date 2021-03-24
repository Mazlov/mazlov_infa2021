#include <iostream>
#include <stack>
#include <string>

int main() {
	std::string s;
	std::stack <std::string> A;
	while (std::cin >> s) {
		if (s[0] != '+' && !(s[0] == '-' && s.length() == 1) && s[0] != '*' && s[0] != '/')
			A.push(s);
		else if (s[0] == '+') {
			std::string s1 = A.top();
			A.pop();
			int i = std::stoi(s1);
			s1 = A.top();
			A.pop();
			i = i + std::stoi(s1);
			A.push(std::to_string(i));
		}
		else if (s[0] == '-') {
			std::string s1 = A.top();
			A.pop();
			int i = std::stoi(s1);
			s1 = A.top();
			A.pop();
			i = std::stoi(s1) - i;
			A.push(std::to_string(i));
		}
		else if (s[0] == '*') {
			std::string s1 = A.top();
			A.pop();
			int i = std::stoi(s1);
			s1 = A.top();
			A.pop();
			i = i * std::stoi(s1);
			A.push(std::to_string(i));
		}
		else if (s[0] == '/') {
			std::string s1 = A.top();
			A.pop();
			int i = std::stoi(s1);
			s1 = A.top();
			A.pop();
			i = std::stoi(s1) / i;
			A.push(std::to_string(i));
		}
	}
	std::cout << A.top();
}
