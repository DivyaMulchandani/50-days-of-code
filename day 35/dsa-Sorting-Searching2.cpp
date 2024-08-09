// counting sort
// non-comparison based sorting
/*
It is particularly efficient when the range of input values is small compared to the number of elements to be sorted. The basic idea behind Counting Sort is to count the frequency of each distinct element in the input array and use that information to place the elements in their correct sorted positions.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {2, 5, 3, 0, 2, 3, 0, 3};
    int max = *max_element(arr.begin(), arr.end());
    vector<int> output(arr.size());
    vector<int> count(max + 1, 0);
    cout << "Input array:" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < count.size(); i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i < count.size(); i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    cout << "Output array:" << endl;
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
}