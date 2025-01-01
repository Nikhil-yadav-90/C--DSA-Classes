// Display this Ap - 100,97,94,.. upto 'n' positive terms

#include<iostream>  
using namespace std;
int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    //100,97,94,.. upto 'n' positive terms
    int a = 100;
    for(int i = 1; i<=n; i++){
        cout << a << endl;
        a -= 3;
    }
    return 0;
}