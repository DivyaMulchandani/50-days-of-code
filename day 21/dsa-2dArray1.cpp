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
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            for (j = 0; j < k; j++)
            {
                cout << i << j << "\t\t\t";
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }
}