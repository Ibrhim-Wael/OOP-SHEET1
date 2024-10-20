/*6-	In a university database, you need to store and manage student records. Each student has personal information like name, roll number, department, and marks for 5 subjects. 
•	Design a struct named Student to hold this data. 
•	Write functions that: 
- Determine the student's grade based on their average marks (A, B, C, etc.).
 - Display all the student's details, including their grade.
*/ //Problem 6


#include <iostream>
#include <string>
using namespace std;
// Define a struct to store student details and functions.
struct Student {
    string name;            
    int rollnum;            
    string department;      
    int grades[5];          

    // Function to initialize the student's basic data
    void get_data(string ename, int erollnum, string edepartment) {
        name = ename;               
        rollnum = erollnum;          
        department = edepartment;    
    }

    // Function to input grades from the user
    void getGrades() {
        for (int i = 0; i < 5; i++) {    
            int n;
            cin >> n;                   
            grades[i] = n;               
        }
    }

    // Function to calculate and return the final grade (letter mark)
    char mark() {
        char c;                          
        int sum = 0;                     

        // Loop through the grades array to calculate the sum of all grades
        for (int i = 0; i < 5; i++) {
            sum += grades[i];
        }

        // Calculate the average of the grades
        sum = sum / 5;

        // Determine the letter grade based on the average
        if (sum >= 90 && sum <= 100) {
            c = 'A';                    // 'A' grade for average 90-100
        } else if (sum >= 80 && sum <= 89) {
            c = 'B';                    // 'B' grade for average 80-89
        } else if (sum >= 65 && sum <= 79) {
            c = 'C';                    // 'C' grade for average 65-79
        } else if (sum >= 50 && sum <= 64) {
            c = 'D';                    // 'D' grade for average 50-64
        }
        return c;                        // Return the computed grade letter
    }

    // Function to display the student details and their final grade
    void display() {
        cout << "Name: " << name << endl;           
        cout << "Roll Number: " << rollnum << endl; 
        cout << "Department: " << department << endl;
        cout << "Grade: " << mark() << endl;       
    }
};

int main() {
    Student s1;                 
    string name, department;  
    int roll;                  

    
    cout << "Please enter your name: ";
    cin >> name;               
    cout << "Please enter your department: ";
    cin >> department;         
    cout << "Please enter your roll number: ";
    cin >> roll;                

    // Set the student's data using the get_data function
    s1.get_data(name, roll, department);

    // Input section: Collect student's grades
    cout << "Please enter your grades: ";
    s1.getGrades();             // Call the function to input grades

    // Display the student information and final grade
    s1.display();               // Call the display function
}
