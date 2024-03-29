// Ques: What is the output of this program?
/*
void main(){
    int a=4;
int b=5;
a++;b--;
cout<<++a<<” “<<b–-;
}

a= 6
b=4

*/
#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 5;
    a++;
    b--;
    cout << ++a <<" "<< b-- ;
    return 0;
}