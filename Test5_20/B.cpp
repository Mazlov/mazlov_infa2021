#include <iostream>
#include <string>

int main() {
    int n, m;
    std::cin >> n;
    std::string* A = new std::string[n];
    std::string s;
    int j = 0;
    while (std::cin >> s) {
        A[n-j-1] = s;
        j++;
    }
    for (int i = 0; i < n; i++) {
        std::cout << A[i] << " ";
    }
    delete [] A;
}
