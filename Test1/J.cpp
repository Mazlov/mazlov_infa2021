#include <iostream>

int main() {
    int a;
    std::cin >> a;
    std::string s;
    while (a > 0) {
        int t = (a % 60) / 10;
        int o = (a % 60) % 10;
        for (int i = 0; i < o; i++)
            s += 'v';
        for (int i = 0; i < t; i++)
            s += '<';
        s += '.';
        a = a / 60;
    }
    for (int i = s.length() - 2; i >= 0; i--)
        std::cout << s[i];
    return 0;
}
