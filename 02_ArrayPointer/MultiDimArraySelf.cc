#include <iostream>

int main()
{
    int my_matrix[3][2] = {{2, 4}, {5, 8}, {15, 34}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << "i " << i << "j " << j << "      " << my_matrix[i][j] << std::endl;
        }
    }
    return 0;
}
