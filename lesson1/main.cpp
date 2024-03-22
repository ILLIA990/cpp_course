//Functions on C++

#include <iostream>


//Void function don't return result


void doPrint(){
    std::cout << "Test void Function" << std::endl;
}

int main(){
    std::cout << "Starting main()" << std::endl;
    doPrint(); // прерываем выполнение функции main() вызовом функции doPrint(). Функция main() в данном случае является caller-ом
    std::cout << "Ending main()" << std::endl;
    return 0;

}