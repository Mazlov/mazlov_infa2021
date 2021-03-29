#include <iostream>

int main()
{
    int a, count = 0;
    std::cin >> a;
    while (a) {
        if (a % 2 == 0)
            count++;
        std::cin >> a;
    }
    std::cout << count;
    return 0;
}
