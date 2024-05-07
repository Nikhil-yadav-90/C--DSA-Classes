#include <iostream>
using namespace std;

// Ques : Take 2 Integers as input and print the greatest of them

int main (){
 int firstInt, secondInt;  
 cout << "Enter the first integer value";
 cin >> firstInt;
 cout<<"Enter the Second integer value";
 cin>> secondInt;

 if (firstInt > secondInt){
    cout<<"The fist integer : "<< firstInt <<" is greater than second integer : "<< secondInt << endl;
 }else{
    cout<<"The second integer : "<<secondInt << " is greater than first integer : "<<firstInt << endl;
 }

return 0;
}
