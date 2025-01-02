// Display this AP 4,7,10,13,16 ... upto n terms.


#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of terms: ";
    int n;  
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<3*i+1<<endl;
    }
    return 0;
}