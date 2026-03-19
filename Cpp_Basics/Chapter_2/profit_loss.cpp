#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your cost price : ";
    int cp;
    cin>>cp;
    cout<<"Enter your selling price : ";
    int sp;
    cin>>sp;
    
    if(cp<sp) 
        cout<<"Profit is of "<<sp-cp;
    else if(cp>sp)
        cout<<"Loss is of "<<cp-sp;
    else 
        cout<<"No profit No loss"; 
}