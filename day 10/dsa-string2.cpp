// valid Anagram

#include<iostream>
#include<string>
#include <algorithm>


using namespace std;

int main(){
    string s = "anagram";
    string t = "nagaram";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"valid anagram"<<endl;
        return true;
    }
    
    return false;
}