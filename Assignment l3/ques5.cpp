// Ques: Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle


#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Input the three sides of traingle";
    cin>>a >> b >> c;
    if (a==b && b==c && c==a)
        cout<<"It is a equilateral triangle";
    else if((a==b && a!=c) || (b==c &&  c!=a) || ( c==a && a!=b))
        cout<<" It is a isosceles triangle";
    else
        cout<<"It is a scalene triangle";
    return 0;
}