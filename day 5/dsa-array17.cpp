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
    int n = intervals.size();

    if(intervals.empty()){
        return vector<vector<int>>();
    }

    sort(intervals.begin(),intervals.end());

    /*
    for(int i=0;i<n;i++){
    if(ans.empty() || interval[i][0]>ans.back()[i]){
    ans.push_back(arr[i]);
    }
    else{
    ans.back()[1] = max(ans.back()[1],arr[i][1]);
    }
    }
    return ans
    */

    for(int i=0;i<n;i++){
        int start = intervals[i][0];
        int end = intervals[i][1];
        if(end <= ans.back()[1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(intervals[j][0] <= end){
                end = max(end,intervals[j][1]);
            }
            else{
                break;
            }
        }
        ans.push_back({start,end});
    }
    return ans;
    
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