#include <iostream>
#include <cmath>


double y(double x) {
    if (x >= 5) {
        return 5 * sqrt(x) + 8.2;
    } else if (1 < x < 5) {
        return 1 / x;
    } else if (-2 <= x <= 1) {
        return -pow(x, 2);
    } else if (x < -2) {
        return pow(x, 3);
    }
}


int main() {
    std::cout << "Введіть x.\n";
    double x;
    std::cin >> x;
    std::cout << "y=" << y(x);
}
