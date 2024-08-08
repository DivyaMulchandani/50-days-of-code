// Permute two arrays such that sum of every pair is greater or equal to K
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int k = 10;
    vector<int> a = {2, 1, 3};
    vector<int> b = {7, 8, 9};
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>()); // Descending sort
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
        cout << b[i] << " ";
        if (a[i] + b[i] >= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}