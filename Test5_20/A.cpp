#include <iostream>
#include <string>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::string* A = new std::string[n];
    std::string s;
    int j = 0;
    while (std::cin >> s) {
        A[(j  - m + (n * m)) % n] = s;
        j++;
    }
    for (int i = 0; i < n; i++) {
        std::cout << A[i] << " ";
    }
    delete [] A;
}
