// Arrange given numbers to form the biggest number

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(const int &a, const int &b) {
    cout<<a<<b<<endl;
    string ab = to_string(a) + to_string(b);
    string ba = to_string(b) + to_string(a);
    return ab > ba;
}

vector<int> arrange(vector<int> &nums)
{
    sort(nums.begin(), nums.end(), compare);
    return nums;
}

int main()
{
    vector<int> nums = {54, 546, 548, 60};
    vector<int> result = arrange(nums);
    for(int i = 0; i < result.size(); i++){
        cout << result[i];
    }
    cout << endl;
    return 0;
}
