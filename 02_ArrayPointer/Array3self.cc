#include <iostream>


int main()
{
    float vector1[3]{};
    float vector2[3]{};

    std::cout << "Enter values for vector1" << std::endl;

    for (int i = 0; i < 3; i++)
    {
        std::cin >> vector1[i];
    }

    std::cout << "Enter values for vector2" << std::endl;

    for (int i = 0; i < 3; i++)
    {
        std::cin >> vector2[i];
    }

    float vector_sum[3]{};
    for (int i = 0; i < 3; i++)
    {
        vector_sum[i] = vector1[i] + vector2[i];
        std::cout << vector_sum[i] << std::endl;
    }

    return 0;
}
