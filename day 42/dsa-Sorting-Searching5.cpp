// ceiling in a sorted array

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int ceil(vector<int> &arr, int x)
{
    sort(arr.begin(), arr.end());
    if (x <= arr[0])
    {
        cout << "Ceil = " << arr[0] << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] < x && x <= arr[i + 1])
            {
                cout << "Ceil = " << arr[i + 1] << endl;
                return 0;
            }
        }
    }
    cout << "Ceil doesn't exist in array";
    return -1;
}

int main()
{
    vector<int> arr = {3, 5, 2, 10, 8, 7, 12, 16, 19};
    int x = 6;
    ceil(arr, x);
    ceil(arr, 20);

    return 0;
}