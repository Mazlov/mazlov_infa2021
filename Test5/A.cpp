#include <iostream>
#include <stack>

int main() {
    int a;
    std::stack <int> N;
    std::cin >> a;
    while (a) {
        if (a > 0) {
            N.push(a);
        }
        else if ((a<0) && (N.size() != 0)) {
            if (-a >= N.top())
                N.pop();
            else
                N.top() = N.top() + a;
        }
        std::cin >> a;
   }
    if (N.size() != 0)
        std::cout << N.size() << " " << N.top();
    else
        std::cout << N.size() << " " << -1;
    return 0;
}
