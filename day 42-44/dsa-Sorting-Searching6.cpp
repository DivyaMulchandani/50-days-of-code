// Find a pair with the given difference

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int pairWithDiff(vector<int> &arr, int x)
{
    sort(arr.begin(), arr.end());
    int i = 0, j = arr.size() - 1;
    while (i < j)
    {
        if (arr[j] - arr[i] == x)
        {
            cout << "Pair fount: (" << arr[i] << "," << arr[j] << ")" << endl;
            return 1;
        }
        else if (arr[j] - arr[i] > x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << "No Such Pair";
    return 0;
}

int main()
{
    vector<int> arr = {3, 5, 2, 10, 8, 7, 12, 16, 19, 20, 50, 80};
    int x = 78;
    pairWithDiff(arr, x);
    return 0;
}