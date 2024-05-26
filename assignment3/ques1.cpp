
//WAP to print the sum of a given number and its reverse.
#include <iostream>
using namespace std;

int main() {
    int givenNumber;
    int revNumber = 0;
    int stgNumber;
    int temp;
    
    cout<<"Enter the The number: ";
    cin>>givenNumber;
    
    stgNumber=givenNumber;
    while(givenNumber > 0){
      temp = givenNumber % 10;
      revNumber*=10;
      revNumber += temp;
      givenNumber /=10;
       
        
    }
    cout << revNumber + stgNumber << endl;
    return 0;
}