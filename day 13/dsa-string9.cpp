//longest repeating character replacement

//length - maxf <= k
//slinding window

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int characterReplacement(string s ,int k){
    
    int head=0; //right
    int tail=0;
    int windowSize=0;
    int ans=0;  //maxLength
    int cnt[26] = {};

    for(head=0;head<s.size();head++){
        cnt[s[head]-'A']++;
        windowSize = head-tail+1;
        while((windowSize - *max_element(cnt,cnt+26)) > k){
             cnt[s[tail] - 'A']--; // Decrement count for the character at the tail
            tail++; // Move the tail pointer to the right
            windowSize = head - tail + 1; // Update the window size after moving the tail

        }
        ans = max(ans,windowSize);
    }
    return ans;
}

int main(){
    string s = "ABAB";
    int k = 2;
    int res = characterReplacement(s,k);
    cout<<"Length of longest repeating character replacement is: "<<res<<endl;
}