// Print first ‘n’ fibonacci numbers.
// Sample Input : 10
// Output : 1 1 2 3 5 8 13 21 34 55


#include <iostream>
using namespace std;
int main (){

    int a =1;
    int b = 1;
    int sum = 0;
    int num ;
    cout<<"Enter the Desired number: " ;
    cin>>num;
    for (int i= 0; i<num; i++){
        if(i < 2){
            cout << b << " " ;
        }else{
        sum = a + b; 
        a=b;
        b=sum;
        cout << sum << " ";
        }
    }
 
    return 0;
}

