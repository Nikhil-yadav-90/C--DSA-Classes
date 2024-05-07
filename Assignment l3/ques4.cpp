// ques: Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.


#include <iostream>
using namespace std;

int main(){
    int length, breadth;
    float area, perimeter;
    cout<<"Enter the Length of rectangle";
    cin>>length;
    cout<<"Enter the breadth of the rectangle";
    cin>>breadth;
    area = length * breadth;
    perimeter = 2 * length + 2 * breadth;
    if (area > perimeter){
        cout<<"Area is greater then perimeter";
    }else{
        cout<<"Perimeter is greater then Area";
    }

    return 0;
}