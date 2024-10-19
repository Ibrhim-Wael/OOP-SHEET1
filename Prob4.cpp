/*=Write a program in C++ to perform mathematical operations (addition, subtraction, multiblication) on complex numbers using structures and functions:
•	Input 2 complex numbers from user and the operation to perform: 
2, 5, 7, 1, ‘+’ 
•	Print result: (2+5i) + (7+1i) = 9+6i
*/

#include <iostream> // Include input-output stream library
using namespace std;

// Define a structure to represent a complex number
struct comp {
    int real; // Real part of the complex number
    int imag; // Imaginary part of the complex number
};

// Main function
int main() {
    char op; // Variable to store the operation (+, -, *)
    comp z1, z2; // Declare two variables of type comp to hold complex numbers
    
    // Prompt user to enter the first complex number
    cout << "Enter the first number (real imaginary): ";
    cin >> z1.real >> z1.imag; // Read real and imaginary parts for z1
    
    // Prompt user to enter the second complex number
    cout << "Enter the second number (real imaginary): ";
    cin >> z2.real >> z2.imag; // Read real and imaginary parts for z2
    
    // Prompt user to enter the operation to perform
    cout << "Enter the operation (+, -, *): " << endl;
    cin >> op; // Read the operation character

    // Switch case to perform the operation based on user input
    switch (op) {
        case '+': // Addition of two complex numbers
            cout << "(" << z1.real << " + " << z1.imag << "i)" 
                 << op << "(" << z2.real << " + " << z2.imag << "i)";
            cout << " = " << (z1.real + z2.real) << " + " << (z1.imag + z2.imag) << "i" << endl;
            break; // Exit the switch case

        case '-': // Subtraction of two complex numbers
            cout << "(" << z1.real << " + " << z1.imag << "i)" 
                 << op << "(" << z2.real << " + " << z2.imag << "i)";
            cout << " = " << (z1.real - z2.real) << " + " << (z1.imag - z2.imag) << "i" << endl;
            break; // Exit the switch case

        case '*': // Multiplication of two complex numbers
            // Calculate real and imaginary parts for the product
            int real = z1.real * z2.real - z1.imag * z2.imag; // Real part
            int imag = z1.imag * z2.real + z1.real * z2.imag; // Imaginary part
            
            cout << "(" << z1.real << " + " << z1.imag << "i)" 
                 << op << "(" << z2.real << " + " << z2.imag << "i)";
            cout << " = " << real << " + " << imag << "i" << endl;
            break; // Exit the switch case
            
        default:
            cout << "Invalid operation!" << endl; // Handle invalid operation
            break; // Exit the switch case
    }

    return 0; // Return 0 to indicate successful execution
}
