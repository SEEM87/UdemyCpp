#include <iostream>

int main()
{
    char last_name[] = "Peschler";

    for (int i = 0; i < 8; i++)
    {
        std::cout << "Last name " << i << last_name[i] << std::endl;
    }
    return 0;
}
