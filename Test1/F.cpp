#include <iostream>

int main()
{
    int a, max = 0, count = 0;
    std::cin >> a;
    while (a) {
        if (a > max) {
            max = a;
            count = 0;
        }
        if (a == max) {
            count++;
        }
        std::cin >> a;
    }
    std::cout << count;
    return 0;
}
