// 4,7,10,13,.......

#include<iostream>
using namespace std;
int main() {
    cout<<"Enter n : ";
    int n;
    cin>>n;
    int a = 4;
    for(int i=1; i<=n; i++){
        cout<<a<<"\n";
        a = a+3;
    }
}