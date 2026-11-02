#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
	int num_a, num_b;
		std::cin >> num_a >> num_b;
	int f_x_a = num_a % 10, f_x_b = num_b % 10;
	int z = f_x_a + f_x_b;
		std::cout << "z = " << std::setprecision(5) << z << std::endl;
	return 0;
}