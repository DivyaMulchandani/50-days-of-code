/**  Chocolate Distribution Problem
 * Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 

Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum.
 * 
 */

/*
The idea is based on the observation that to minimize the difference, we must choose consecutive elements from a sorted packet. We first sort the array arr[0..n-1], then find the subarray of size m with the minimum difference between the last and first elements.
*/
#include <iostream>

using namespace std;

int mindiff(int A[],int n,int m){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(A[i]>A[j]){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }

    if (n < m)
        return -1;

    int min_diff = A[-1];

    for(int i=0;i+m-1<n;i++){
        int diff = A[i+m-1] - A[i];
        if (diff < min_diff){
            min_diff = diff;
        }
    }

    return min_diff;
    
}
int main(){
    int arr[] = {12, 4, 7, 3, 10};
    //int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,40, 28, 42, 30, 44, 48, 43, 50 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 3;

    cout<<"the Min differece is: "<<mindiff(arr,n,m);    
    return 0;
}