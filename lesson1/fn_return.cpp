#include <iostream>
 
// int означает, что функция возвращает целочисленное значение обратно в caller
int return_func()
{
    // Эта функция возвращает целочисленное значение, поэтому мы должны использовать оператор return
    return 7; // возвращаем число 7 обратно в caller
}
 
int main()
{
    std::cout << return_func() << std::endl; // выведется 7
    std::cout << return_func() + 3 << std::endl; // выведется 10
 
    std::cout << return_func(); // возвращаемое значение 7 игнорируется, так как функция main() ничего с ним не делает
 
    return 0;
}