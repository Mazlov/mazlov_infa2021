#include <iostream>
#include <cmath>

int main()
{
    int a, b;
    std::cin >> a;
    b = a;
    for (int i = 2;  i  <= b;  i++) {
        while (a % i == 0) {
            std::cout << i << std::endl;
            a = a / i;
        }
    }
    return 0;
}
