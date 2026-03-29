#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"Enter the value of array : ";
    for(int i=0; i<=6; i++){
        cin>>arr[i];
    }
    
    int count = 0;
    for(int i=0; i<=6; i++){
        if(arr[i]%2==0) count++;
        
    }

    cout<<count;

}
