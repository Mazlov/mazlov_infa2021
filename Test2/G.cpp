#include <iostream>
#include <cmath>

int main()
{
    int a;
    std::cin >> a;
    for (int i = 2;  i  <= std::sqrt(a);  i++) {
        if (a % i == 0) {
            std::cout << 0;
            break;
        }
        else
        {
            if (i == int(std::sqrt(a)))
                std::cout <<1;
        }
    }
    return 0;
}
