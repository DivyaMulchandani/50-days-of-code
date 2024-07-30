#include <iostream>
#include <vector>

void printDiagonalOrder(const std::vector<std::vector<int>> &matrix)
{
    if (matrix.empty())
        return;

    int rows = matrix.size();
    int cols = matrix[0].size();

    // First half: from top-left to bottom-right
    for (int d = 0; d < rows; ++d)
    {
        int row = d;
        int col = 0;
        while (row >= 0 && col < cols)
        {
            // std::cout << row << col << " ";
            std::cout << matrix[row][col] << " ";
            --row;
            ++col;
        }
        std::cout << std::endl;
    }

    // Second half: from bottom-left to top-right
    for (int d = 1; d < cols; ++d)
    {
        int row = rows - 1;
        int col = d;
        while (row >= 0 && col < cols)
        {
            std::cout << matrix[row][col] << " ";
            --row;
            ++col;
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}};

    printDiagonalOrder(matrix);

    return 0;
}
