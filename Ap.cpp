// Display the AP - 1,3,5,7,9 ...n terms

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    //! using matrhametical formula
    // for(int i=1; i<=(2*n-1) ; i+=2){
    //     cout << i << endl;
    // }

    // Using seprate variable

    int a = 1;
    for(int i=1; i<=n ; i++){
        cout << a << endl;
        a += 2;
    }

    return 0;
}