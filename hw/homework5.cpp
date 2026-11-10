/* 
//1 задание

#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;
    double s = 0;

    for (int i = 1; i <= n; ++i) {
        s += std::pow(-1, 1 + i) / std::pow(2 * i + 1, 2);
    }
    std::cout << "s = " << s << std::endl;

    return 0;
}

// 2 задание


#include <iostream>
int main()
{
    int n;
    double x, p = 1.0, b = 1.0;
    long long fact = 1;

std::cin >> x;
std::cin >> n;

for (int i = 1; i <= n; i++)
{
    fact *= (2 * i - 1) * (2 * i);
    b *= x;
    p *= (1 + (b / fact));
}
std::cout << "p = " << p << std::endl;
return 0;
}

//3 задание (при вводе любой e, s всегда будет равен -0.25, не понимаю в чем ошибка)

#include <iostream>
#include <cmath>

int main()
{
    int i = 1;
    double e, s = 0;
    double a = std::pow(-1, i) / std::pow(2, 2 * i); // -0.25
    std::cin >> e;

    do {
        s += a;
        i++;
        a = a * (-1.0) / 4.0;
    } while (std::fabs(a) >= e);

    std::cout << "s = " << s << std::endl;
    return 0;
}
*/