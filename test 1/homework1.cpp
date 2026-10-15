/*
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

//2
#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
	int x;
	std::cin >> x;
	double y = std::cbrt(x);
	std::cout << "y = " << std::setprecision(5) << y << std::endl;
	return 0;
}

//3
#include <iostream>
#include <string>
int main() {
	int x;
	std::cin >> x;
	int a = x / 10;
	int b = x % 10;
	std::cout << (x >= 10 && x < 100 ? std::to_string(a + b) : "Введите двузначное число") << std::endl;
	return 0;
}*/