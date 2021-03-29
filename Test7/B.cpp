#include <iostream>

int main() {
	int N, b = 0;
	std::cin >> N;
	int* A = new int[N];
	for (int i = 0; i < N; i++)
		std::cin >> A[i];
	for (int i = 0; i < N; i++) {
		if ((A[i] % 4 == 0) && !((A[i] / 1000 == 4) || (A[i] / 1000 == 5))) {
			std::cout << A[i] << std::endl;
			b++;
		}
		else if ((A[i] % 7 == 0) && !((A[i] / 1000 == 7) || (A[i] / 1000 == 1))) {
			std::cout << A[i] << std::endl;
			b++;
		}
		else if ((A[i] % 9 == 0) && !((A[i] / 1000 == 9) || (A[i] / 1000 == 8))) {
			std::cout << A[i] << std::endl;
			b++;
		}
	}
	if (b == 0)
		std::cout << b;
}
