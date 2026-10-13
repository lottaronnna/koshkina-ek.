//1 уравнение (у меня ошибка при вводе (cin))

#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
	int x = 1;
	double y = 10 * std::sin(x) + std::abs(std::pow(x, 4) + std::pow(x, 5));
	std::cout << "y = " << std::setprecision(5) << y << std::endl;
	return 0;
}


 //2 уравнение
#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
int main() {
	int x = 1;
	int y = 1;
	double c = std::pow(std::numbers::e, -x) - std::cos(x) + std::sin(2 * x * y);
	std::cout << "c = " << std::setprecision(5) << c << std::endl;
	return 0;
}

//3 уравнение 
#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
	int x = 1;
	double y = std::sqrt(std::pow(x, 4) + std::sqrt(std::abs(x + 1)));
	std::cout << "y = " << std::setprecision(5) << y << std::endl;
	return 0;
}

//4 уравнение
#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
	int x = 1;
	int y = 1;
	double c = ((std::sin(x) + std::cos(y)) / std::tan(x)) + 0.43;
	std::cout << "c = " << std::setprecision(5) << c << std::endl;
	return 0;
}

//5 уравнение 
#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
	int x = 1;
	double y = (0.125 * x + std::abs(std::sin(x))) / (1.5 * std::pow(x, 2) + std::cos(x));
	std::cout << "y = " << std::setprecision(5) << y << std::endl;
	return 0;
}

////////
