//longest substring without repeating characters

#include<iostream>
#include<string>
#include<set>
#include <vector>

using namespace std;

int main(){
    string s = "abcabcbb";
    set<char> ss;
    int max_l = 0;
    int left =0;
    for(int i=0;i<s.size();i++){
        while(ss.find(s[i]) != ss.end()){
            ss.erase(s[left]);
            left++;
        }
        
        ss.insert(s[i]);
        max_l = max(max_l,i-left+1);

    }
    // string s="abcabcbb";
    // int max_len = 0;
    // int start = -1;
    // vector<int> ss(256,-1);
    // for(int i=0;i<s.size();i++){
    //     if(ss[s[i]] > start){
    //         start = ss[s[i]];
    //     }
    //     ss[s[i]] = i;
    //     max_len=max(max_len,i-start);
    // }

    cout<<max_l;

    return max_l;
}