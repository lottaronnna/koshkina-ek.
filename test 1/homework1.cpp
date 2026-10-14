//1 задание
#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
	int x;
	std::cin >> x;
	double y = 1.00 + (x / 3.00) + std::abs(x) + ((std::pow(x, 3.00) + 4.00) / 2.00);
	std::cout << "y = " << std::setprecision(5) << y << std::endl;
	return 0;
}