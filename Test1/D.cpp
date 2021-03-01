#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    while (a % 2 == 0)
        a = a / 2;
    if (a == 1)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}
