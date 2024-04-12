#include <cmath>
#include <iostream>

double func(double x) {
  double result = 1;
  if (x > 0 && x < 4) {
    result = 4 - pow(x, 2);
  } else if (x < 0) {
    result = pow(x, 3);
  } else if (x == 0) {
    result = 0;
  }
  return result;
}

int main() {
  double x;

  std::cout << "Enter x: ";
  std::cin >> x;
  double result = func(x);

  std::cout << result;
}
