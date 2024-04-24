#include <iostream>
#include <cmath>

double func(double x)
{
    double result;

    if (x > 0 && x < 4)
    {
        result = 4 - pow(x, 2);
    } else if (x == 0) {
        result = 0;
    } else if ( x < 0 ){
        result = pow(x, 3);
    } else {
        result = 1;
    }
    return result;
}

int main()
{
    double x;

    std::cout << "Enter x: ";
    std::cin >> x;

    double result = func(x);
    std::cout << result << std::endl;
}