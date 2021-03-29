#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a;
    std::cin >> b;
    if (a < b) {
        c = a;
        a = b;
        b = c;
    }
    while ((a > b) && (b != 0)) {
        a = a - b;
        if (a < b) {
            c = a;
            a = b;
            b = c;
        }
    }
    std::cout << a;
    return 0;
}
