
#include <iostream>
using namespace std;

void reverse(int n){
    int revnum = 0; 
    int last_digit;
    while(n!=0){
        int last_digit = n%10; // extracts last digit of the integer
    revnum = (10*revnum)+last_digit; //this will add the last digit to the reverse number 
    n = n/10; // removes the last number and the decimal part.
    }
    cout << revnum; 
}

int main(){
    cout << "type a number: "; 
    int n;
    cin >> n; //takes user input.
    reverse(n); //passes user input into reverse func.
    return 0;
}


