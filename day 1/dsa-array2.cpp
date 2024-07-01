//Array Reverse


#include <iostream>

using namespace std;

void reversed(int A[],int start,int end){
    for(;start<end;start++,end--){
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
    }
}

void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int A[]={2,3,4,5,6,7,8,2,4,5,3,1};
    int n = sizeof(A)/sizeof(A[0]);

    cout<<"Original array: "<<endl;
    printarray(A,n);
    cout<<"Reversed array: "<<endl;
    reversed(A,0,n-1);
    printarray(A,n);
}