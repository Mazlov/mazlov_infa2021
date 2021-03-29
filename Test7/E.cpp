#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	int** A = new int* [N];
	for (int i = 0; i < N; i++) {
		A[i] = new int[N];
		for (int j = 0; j < N; j++)
			std::cin >> A[i][j];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			std::cout << A[N - j - 1][i] << ' ';
		std::cout << std::endl;
	}
}
