//Take 3 positive integers input and print the greatest of them.

#include<iostream>
using namespace std;
int main() {
    int a;
    int b;
    int c;
    cout<<"Enter your 1st no : ";
    cin>>a;
    cout<<"Enter your 2nd no : ";
    cin>>b;
    cout<<"Enter your 3rd no : ";
    cin>>c;

    if(a>b && a>c)
        cout<<a<<" is greater in them";
    else if(b>a && b>c)
        cout<<b<<" is greater in them";
    if(c>b && c>a)
        cout<<c<<" is greater in them";
}