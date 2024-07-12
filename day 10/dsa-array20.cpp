//Space optimization using bit manipulations

#include <stdio.h>
#include <corecrt_math.h>
#include <iostream>

using namespace std;

bool checkBit(int array[],int index){
    return array[index >> 5] & (1 << (index & 31));
}

void setbit(int array[],int index){
    array[index >>5] |= (1 << (index & 31));
}

int main(){
    int a=2,b=10;
    int size = abs(b-a)+1;

    int* array = new int[size];
    for(int i=a;i<size;i++){
        if (i%2==0 || i%5==0){
            setbit(array,i);
        }
    }

    cout << "Multiples of 2 and 5:\n";
    for(int i=a;i<size;i++){
        if(checkBit(array,i-a)){
            cout << i << " ";
        }
    }

    return 0;

}