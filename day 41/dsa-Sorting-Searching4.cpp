// Searching in an array where adjacent differ by at most k

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {4, 5, 6, 7, 6};
    int k = 1;
    int x = 6;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
        {
            cout << "Element found at index " << i << endl;
            break;
        }
    }
}