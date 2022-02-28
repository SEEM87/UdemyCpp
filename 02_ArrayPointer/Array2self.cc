#include <iostream>

int main()
{
    float user_balances[10] = {};

    for (int i = 0; i < 10; i++)
    {
        std::cout << "user_balance [i]" << user_balances[i] << std::endl;
    }
    for (int i = 0; i < 10; i++)
    {
        user_balances[i] = 10.0f * i;
        std::cout << "user_balance [i]" << user_balances[i] << std::endl;
    }
    return 0;
}
