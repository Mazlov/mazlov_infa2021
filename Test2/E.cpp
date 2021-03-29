#include <iostream>

int main()
{
    int a, max = 0;
    std::cin >> a;
    while (a) {
        if ((a % 2 == 0) && (a > max))
            max = a;
        std::cin >> a;
    }
    std::cout << max;
    return 0;
}
