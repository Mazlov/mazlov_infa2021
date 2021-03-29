#include <iostream>
#include <string>

int main() {
    int n, m;
    std::cin >> n;
    int* A = new int[n];
    int j = 0;
    while (std::cin >> m) {
        A[j] = m;
        j++;
    }
    j--;
    for (int i = 0; i < n; i++) {
        if (i == 0)
            std::cout << (A[j] + A[0] + A[1]) / 3 << ' ';
        else if (i > 0 && i < j)
            std::cout << (A[i] + A[i - 1] + A[i + 1]) / 3 << ' ';
        else
            std::cout << (A[i] + A[i - 1] + A[0]) / 3 << ' ';
    }
    delete[] A;
}
