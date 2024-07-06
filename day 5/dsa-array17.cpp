//Merge overlapping intervals

/*
Input: Intervals = {{1,3},{2,4},{6,8},{9,10}}
Output: {{1, 4}, {6, 8}, {9, 10}}
Explanation: Given intervals: [1,3],[2,4],[6,8],[9,10], we have only two overlapping intervals here,[1,3] and [2,4]. Therefore we will merge these two and return [1,4],[6,8], [9,10].

Input: Intervals = {{6,8},{1,9},{2,4},{4,7}}
Output: {{1, 9}}
*/

#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals){
    
    vector<vector<int>> ans;

    if(intervals.empty()){
        return vector<vector<int>>();
    }

    sort(intervals.begin(),intervals.end());

    
}

int main(){
    vector<vector<int>> intervals = {{6, 8}, {1, 9}, {2, 4}, {4, 7}};
    vector<vector<int>> merged = overlappedInterval(intervals);
 
    cout << "The Merged Intervals are: ";
    for (int i=0;i<merged.size();i++) {
        cout << "[";
        // merged.top();
        cout << "] ";
    }
    cout << endl;
    
    return 0;
}