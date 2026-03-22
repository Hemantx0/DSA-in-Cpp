// Take 5 numbers in an array and print only the even numbers.

// Example:
// Input: 1 2 3 4 5
// Output: 2 4

#include<iostream>
using namespace std;
int main() {
    int arr[5];
    cout<<"Enter values : ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        if(arr[i]%2==0) cout<<arr[i]<<" ";
    }
}