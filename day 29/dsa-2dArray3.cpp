// spiral matrix
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> spiralorder(vector<vector<int>> &matrix)
{
    vector<int> result;
    int top = 0, bottom = matrix.size();
    int left = 0, right = matrix[0].size();
    while (top < bottom && left < right)
    {
        for (int i = left; i < right; i++)
        {
            result.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i < bottom; i++)
        {
            result.push_back(matrix[i][right - 1]);
        }
        right--;
        if (!(left < right) || !(top < bottom))
        {
            break;
        }
        for (int i = right - 1; i >= left; i--)
        {
            result.push_back(matrix[bottom - 1][i]);
        }
        bottom--;
        for (int i = bottom - 1; i >= top; i--)
        {
            result.push_back(matrix[i][left]);
        }
        left++;
    }
    return result;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> result = spiralorder(matrix);
    for (int i = 0; i <= result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}