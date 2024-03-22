#include <iostream>

int getValueUser(){
    std::cout << "Enter value: ";
    int x;
    std::cin >> x;
    return x;
}


int main(){
    int a = getValueUser();
    int b = getValueUser();

    std::cout << a << " + " << b << " = " << a + b << std::endl;

}