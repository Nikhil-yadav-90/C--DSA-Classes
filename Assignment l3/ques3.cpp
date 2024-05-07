// ques. Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not 
// (Considering leap year ocuurs after every 4 years)


#include <iostream>
using namespace std;

int main() {

    int year;
    cout<<"Input the year for checking it as a leap year or not";

    cin>> year;

    if(( year % 4 == 0) && (year % 100 !=0 || year % 400 == 0)){
        cout<<" The year is a leap year ";
    }else{
        cout << " The year is not a leap year";
    }  

    return 0;
}