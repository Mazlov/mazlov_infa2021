int main() {
	int a, b, c, d, x;
	std::cin >> a >> b >> c >> d >> x;
	if ((x == b - a) && (x == d / c))
		std::cout << 5;
	else if ((x == b - a) || (x == d / c))
		std::cout << 4;
	else if (x == 1024)
		std::cout << 3;
	else
		std::cout << 2;
	return 0;
}
