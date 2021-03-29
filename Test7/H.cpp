#include <iostream>

int main() {
	int N, r;
	std::cin >> N;
	r = 2 * N;
	int* A = new int[N];
	for (int i = 0; i < N; i++) {
		std::cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		if (A[i] < 0) {
			for (int j = i + 1; j < N; j++) {
				if ((A[j] == -A[i]) && ((j - i) < r))
					r = j - i;
			}
		}
	}
	if (r == 2 * N)
		std::cout << 0;
	else
		std::cout << r;
}
