// Print the table of'n' . Here 'n' is na integer which the user will input.


#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number for Table: ";
    int n;
    cin>>n;
    for (int i = 1; i <= 10; i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;

    }
}