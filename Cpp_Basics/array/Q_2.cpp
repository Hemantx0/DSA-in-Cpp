// Take 5 numbers in an array and count how many are positive.

// Example:
// Input: -2 5 0 8 -1
// Output: 2


#include<iostream>
using namespace std;
int main() {
    int arr[5];
    cout<<"Enter values : ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0; i<5; i++){
        if(arr[i]>0)
            count++;
    }
    cout<<"Number : "<<count;
}