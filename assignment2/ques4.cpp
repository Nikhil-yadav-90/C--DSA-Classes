/*
Ques: WAP for finding the volume of the cylinder by taking radius and height as input.
*/

#include <iostream>
using namespace std;
int main(){
    cout<<"Write a Program to Find the volume of the cylinder";
    cout<<"\n Enter the radius of Cylinder";
    float radius;
    cin>>radius;
    cout<<"Enter the height of the Cylinder";
    float height, volume;
    cin>>height;
    volume = 3.14 * radius *height ;
    cout<<"Volume of cyliner with radius: "<<radius<<" and height: "<<height<<"is --->"<<volume;
    return 0;
}