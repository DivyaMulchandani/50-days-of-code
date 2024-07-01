//Maximum and minimum of an array using minimum number of comparisons

#include <iostream>

using namespace std;

int min(int A[],int n){
    
    int min=A[0];
    for(int i=0;i<n;i++){
        if(A[i]<min){
            min=A[i];
        }
    }
    return min;
}

int max(int A[],int n){
    int max=A[0];
    for(int i=0;i<n;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    return max;
}

int main(){
    int A[]={2,3,4,5,6,7,8,2,4,5,3,1};
    int n = sizeof(A)/sizeof(A[0]);

    cout<<"Minimum element is: "<<min(A,n)<<endl;
    cout<<"Maximum element is: "<<max(A,n)<<endl;

}