// Take 3 numbers input and tell if they can be the sides of a triangle.
#include<iostream>
using namespace std;
int main() {
    float a;
    float b;
    float c;
    cout<<"Enter your 1st side : ";
    cin>>a;
    cout<<"Enter your 2nd side : ";
    cin>>b;
    cout<<"Enter your 3rd side : ";
    cin>>c;

    if((a+b)>c && (b+c)>a && (a+c)>b)
        cout<<"Valid Triangle";
    else cout<<"Invalid Triangle";
}