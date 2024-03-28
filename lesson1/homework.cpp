#include <iostream>
// x - Count Apples

int func(int x){
    int price_Apples = 2;

    std::cout << "Enter count aplles: ";
    std::cin >> x;

    if (x >= 40){
        price_Apples = 1;
    }
    int result = x * price_Apples;
    return result;


}

int main() {
    int x = 0;

    int totalPrice = func(x);

    std::cout << totalPrice ;

    return 0;
}
