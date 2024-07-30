#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    unordered_map<int, bool> zeroPositions;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                zeroPositions[i] = true;        // Mark the row
                zeroPositions[j + rows] = true; // Mark the column with offset to avoid collision with rows
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (zeroPositions.find(i) != zeroPositions.end() || zeroPositions.find(j + rows) != zeroPositions.end())
            {
                matrix[i][j] = 0;
            }
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};
    setZeroes(matrix);
    return 0;
}