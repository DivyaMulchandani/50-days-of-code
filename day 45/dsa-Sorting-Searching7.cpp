// Majority Element
// A majority element in an array A[] of size n is an element that appears more than n/2 times
// uses Boyer-Moore Voting Algorithm

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void majority(std::vector<int> &arr)
{
    int candidate = 0, count = 0;

    // Finding the candidate for majority element
    for (int num : arr)
    {
        if (count == 0)
        {
            candidate = num;
        }

        if (num == candidate)
        {
            count += 1; // Increment count if num matches candidate
        }
        else
        {
            count -= 1; // Decrement count if num does not match candidate
        }
    }

    // Verifying if the candidate is indeed the majority element
    count = 0;
    for (int num : arr)
    {
        if (num == candidate)
        {
            count++;
        }
    }

    if (count > arr.size() / 2)
    {
        std::cout << "Majority element is: " << candidate << std::endl;
    }
    else
    {
        std::cout << "No majority element found." << std::endl;
    }
}

int main()
{
    vector<int> arr = {3, 4, 2, 4, 2, 4, 4};
    vector<int> arr2 = {3, 3, 4, 2, 4, 4, 2, 4};
    majority(arr);
    majority(arr2);
    return 0;
}