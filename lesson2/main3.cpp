#include <iostream>
#include <cmath>

double func(int x, int b, int z, double a){
    double num = pow(cos(1), 2)* (b* pow(x, 5));
    double den = sin(pow(a, 2)) + cos(pow(x, 3) + pow(z, 5) - pow(a, 2));
    double result = num - den;
    return result;
}

int main(){
    double x, b, z , a;

    std::cout << "Enter x: ";
    std::cin >> x;

    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "Enter z: ";
    std::cin >> z;

    std::cout << "Enter a: ";
    std::cin >> a;

    double Function = func(x, b, z, a);
    std::cout << Function;


}