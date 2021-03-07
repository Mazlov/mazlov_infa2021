#include <iostream>

int main() {
    int n,  sum2 = 0;
    double sum1 = 0;
    std::cin >> n;
    int* A = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
        sum1 = sum1 + A[i];
    }
    for (int i = 0; i < n; i++) {
        if (A[i] > sum1 / n)
            sum2 = sum2 + A[i];
    }
    std::cout << sum2;
    delete [] A;
    return 0;
}
