//Valid Palindrome

#include<iostream>
#include<algorithm>
#include <string>

using namespace std;

bool isPalindrome(string s){
    string ss;
    for(char c: s){
        if(isalnum(c)){
            ss += tolower(c);
        }
    }
    for(int i=0;i<ss.size()/2;i++){
        if(ss[i] != ss[(ss.size()-i)-1]){
            return false;
        }
    }
    return true;
}

int main(){
    string s="A man, a plan, a canal:Panama";
    cout<<isPalindrome(s);
}