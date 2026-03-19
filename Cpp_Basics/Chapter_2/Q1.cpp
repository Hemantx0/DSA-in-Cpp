// Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.


#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your Length : ";
    float l;
    cin>>l;
    cout<<"Enter your Breadth : ";
    float b;
    cin>>b;
    float area = l*b;
    float peri = 2*(l+b);

    if(area > peri) 
        cout<<"Area is greater than Perimeter";
    else
        cout<<"perimeter is greater than Area";
}