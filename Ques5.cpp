// Display this GP - 3,12,48,.. upto ‘n’ terms.


#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of terms: ";
    int n;  
    cin>>n;
    int val = 3;
    for (int i = 1; i <= n; i++)
    {
        cout<<val<<endl;
        val*=4;
    }
    return 0;
}
