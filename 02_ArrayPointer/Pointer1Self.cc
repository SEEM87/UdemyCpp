#include <iostream>

int main()
{
    int my_value = 12;

    int *p = &my_value;

    std::cout << p << std::endl;
    std::cout << &p << std::endl;
    std::cout << *p << std::endl;


    return 0;
}
