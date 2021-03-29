#include <iostream>

int main() {
    int n, m;
    std::cin >> n;
    int* A = new int[n];
    for (int i = 0; i < n; i++)
        std::cin >> A[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (A[j] > A[j + 1]) {
                A[j] = A[j] + A[j + 1];
                A[j + 1] = A[j] - A[j + 1];
                A[j] = A[j] - A[j + 1];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << A[i] << ' ';
    }
    delete[] A;
}
