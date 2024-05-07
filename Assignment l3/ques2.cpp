// ques: Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not


#include <iostream>
using namespace std;

int main() {
    
    float radius;
    cout<<"Enter the radius of the circle";
    cin>>radius;

    const float PI = 3.14;
    float area = PI * radius *radius ;
    float circuference = 2 * PI * radius ;

    if( area > circuference ){
        cout << "Numerical value of area is greater than circumference having radius: "<<radius<<endl;
        cout<< "Area of circle: "<<area<<endl;
        cout <<"Circumference of circle: "<<circuference<< endl;
    }else{
        cout<<"Circumference value is greater than numerical value of area of circle having radius: "<<radius <<endl;
        cout<< "Area of circle: "<<area<<endl;
        cout <<"Circumference of circle: "<<circuference<< endl;
    };
    
    return 0;

}