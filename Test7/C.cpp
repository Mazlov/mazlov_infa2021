#include <iostream>
#include <cmath>

int main() {
	int number = 0, n;
	double m = 0, d = 0, sum = 0, sum2 = 0;
	while (std::cin >> n && n != 0) {
		sum = sum + n;
		sum2 = sum2 + n * n;
		number++;
		m = std::round(1000 * (sum / number)) / 1000;
		d = std::round(1000 * (sum2 / number)) / 1000 - m * m;
	}
	std::cout << m << ' ' << d;
}
