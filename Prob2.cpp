/*2-	Write a program in C++ to find a prime number within a range.
•	Input number for starting range: 1
•	Input number for ending range: 100
•	The prime numbers between 1 and 100 are:
        2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
•	The total number of prime numbers between 1 to 100 is: 25
*/ //Problem 2

#include <iostream>
using namespace std;
int main(){ 
int Startrange;
int Endrange;
int primeCount = 0;
cout<<"Input number for starting range: ";
cin>>Startrange;
cout<<"Input number for ending range: ";
cin>>Endrange;
cout<<"The Prime Numbers Between "<<Startrange<<" and "<<Endrange<<" are: \n";

    for (int num = Startrange; num <= Endrange; num++) {
        if (num <= 1) continue; // Skip numbers less than or equal to 1
        
        bool isPrime = true; // Assume num is prime

        // Check if num is divisible by any number from 2 to sqrt(num)
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false; // Not a prime number
                break; // No need to check further
            }
        }

        if (isPrime) {
            cout << num << " "; // Print the prime number
            primeCount++; // Increment the prime count
        }
    }

    cout << endl; // New line after listing primes
    cout << "The total number of prime numbers between " << Startrange << " and " << Endrange << " is: " << primeCount << endl;

    return 0; // Exit the program
}
