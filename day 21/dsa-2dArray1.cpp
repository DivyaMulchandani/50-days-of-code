// phele row fir columns (standing sleeping)

// diagonal traversal of matrix

/*
00

10
01

20
11
02
*/
#include <iostream>

using namespace std;

int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int rows = 5;

    // for (i = 0; i < 3; i++)
    // {
    //     for (int k = 0; k < 4; k++)
    //     {
    //         for (j = 0; j < k; j++)
    //         {
    //             cout << i << j << "\t\t\t";
    //             cout << a[i][j] << "\t";
    //         }
    //         cout << endl;
    //     }
    // }
    // Print the upper part of the pattern
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << i << j << "\t";
    //         cout << a[i][j] << "\t";

    //     }
    //     cout << std::endl;
    // }

    // Print the lower part of the pattern
    // for (int i = 3 - 1; i >= 1; --i)
    // {
    //     for (int j = 0; j < i; ++j)
    //     {
    //         cout << a[i][j];
    //     }
    //     cout << std::endl;
    // }

    // Loop to print each row
    for (int i = 0; i < rows; ++i)
    {
        // Loop to print each element in the row
        for (int j = 0; j < rows - i; ++j)
        {
            // Calculate and print the value
            int firstDigit = (i + j) % 3;
            int secondDigit = (2 - j + i) % 3;
            std::cout << firstDigit << secondDigit << " ";
        }
        std::cout << std::endl;
    }
}