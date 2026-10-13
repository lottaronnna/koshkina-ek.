/*
задание 1
#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
	int a = 20;
	double s = std::pow(a / 4, 2);
	std::cout << "s = " << std::setprecision(5) << s << std::endl;
	return 0;
}
*/

#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
	int p = 21;
	double s = (std::sqrt(3 ) / 36) * std::pow(p, 2);
	std::cout << "s = " << std::setprecision(5) << s << std::endl;
	return 0;
}

