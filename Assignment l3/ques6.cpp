// Ques: If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks

#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    cout<<"Enter the Marks of Student A, B, C";
    cin>>A>>B>>C;
    if ((A>B) && (B>C))
        cout<<"C is scoring least marks";
    else if((B>C) && (C>A))
        cout<<"A is scoring least marks";
    else if((C>A) && (A>B))
        cout<<"B is scoring least marks";
    else
        cout<<"Every one get equal marks";
    return 0;
}
