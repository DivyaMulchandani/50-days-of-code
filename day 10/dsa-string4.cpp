//remove consecutive same character

#include<iostream>
#include<string>


using namespace std;

int main(){
    string s = "aabb";
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            s.erase(i,1);
            i--;
        }
    }
    cout<<s<<endl;
    return 0;
}