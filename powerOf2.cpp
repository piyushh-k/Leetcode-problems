//LEETCODE PROBLEM 231 

#include <iostream> 
using namespace std;

bool power(int n) {
    if (n <= 0) {
        return false; //Returns false if the given number is negative or a zero.
    }
    if (n == 1) {  // If n is reduced to 1, it confirms that the original number is a power of 2.
        return true; 
    }
    if (n % 2 != 0) {
        return false; //Returns false if the n/2 doesn't give remainder 0.
    }
    return power(n / 2); // Calls the function again and passes n/2 .
}

int main() {
    cout << "Type n: ";
    int n;
    cin >> n;

    if (power(n)) {
        cout << "Given number is a power of 2." << endl;
    } else {
        cout << "Given number is not a power of 2. "<< endl;
    }

    return 0;
}


