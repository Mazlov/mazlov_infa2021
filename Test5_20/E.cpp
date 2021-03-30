#include <iostream>

void out(int* A, int m) {
    for (int i = 0; i < m; i++) {
        std::cout << A[i] << ' ';
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    int* A = new int[n];
    for (int i = 0; i < n; i++)
        std::cin >> A[i];
    for (int i = 0; i < n; i++) {
        int j = 0;
        while (j < n - i - 1) {
            if (A[j] >= 0) {
                int k = j + 1;
                while ((A[k] < 0) && (k < n - i - 1))
                    k++;
                if ((A[j] >= 0) && (A[k] >= 0) && (A[j] > A[k])) {
                    A[j] = A[j] + A[k];
                    A[k] = A[j] - A[k];
                    A[j] = A[j] - A[k];
                    out(A, n);
                }
            }
            j++;
        }
    }
    for (int i = 0; i < n; i++) {
        int r = 0;
        while (r < n - i - 1) {
            if (A[r] < 0) {
                int t = r + 1;
                while ((A[t] >= 0) && (t < n - i - 1))
                    t++;
                if ((A[r] < 0) && (A[t] < 0) && (A[r] < A[t])) {
                    A[r] = A[r] + A[t];
                    A[t] = A[r] - A[t];
                    A[r] = A[r] - A[t];
                    out(A, n);
                }
                r++;
            }
        }
    }
    delete[] A;
}
