#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n, l = 0;
	std::vector <int> A;
	while (std::cin >> n) {
		A.push_back(n);
		l++;
	}
	std::sort(A.begin(), A.end());
	for (int i = 0; i < l; i++)
		if (A[i] % 2 == 0)
			std::cout << A[i] << ' ';
	for (int i = 0; i < l; i++)
		if (A[i] % 2 == 1)
			std::cout << A[i] << ' ';
}
