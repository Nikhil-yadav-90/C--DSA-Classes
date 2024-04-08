/*
Ques: WAP to find the difference between ASCII of two characters ,take them as input
*/
#include<iostream>
using namespace std;
int main(){
    cout<<"WAP to find the difference between ASCII of two characters ,take them as input \n";

    char first, second;
    cout<<"Enter the First character\n";
    cin>>first;
    cout<<"Enter the Second character \n";
    cin>>second;
    int diff = (int)first - (int)second;
    cout<<"The difference between two ascii characters are: "<<diff;
    
    return 0;
}