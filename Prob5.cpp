/*5-	Write a program that used to manage HR data of department that has a team of 5 employees . the employee data like (eno,ename,job,salary ,bouns) the program should have 
•	Function to accept the data of the employee and automatically set the salary according to the following formulas in case the 
                                      Job=”Manager”-> salary=5000
                                       Job=”Engineer”-> salary=3000
                                       Job=”Clerk”-> salary=2000
                                       Otherwise -> salary=1000
•	Function to set the bonus value for specific employee according to specific percent (accept it from the user )
•	Function to print out the data of all employees 
*/ //Problem 5


#include <iostream>
#include <string>
using namespace std;

struct HRdata {
    int eno;
    string ename;
    string job;
    int salary;
    int bonus;

    // Function to get employee data
    void getdata(int e, string eename, string ejob, int ebonus) {
        eno = e;
        ename = eename;
        job = ejob;
        
        // Determine salary based on job type
        if (ejob == "Engineer") 
            salary = 3000;
        else if (ejob == "Manager") 
            salary = 5000;
        else if (ejob == "Clerk") // Corrected the typo from "Clerck" to "Clerk"
            salary = 2000;
        else 
            salary = 1000;

        bonus = ebonus;
    }

    // Method to calculate salary after bonus
    int calculateSalaryAfterBonus() {
        return (salary * bonus / 100) + salary; // Calculate salary after adding the bonus
    }

    // Function to display employee data
    void showdata() {
        cout << "User name: " << ename << endl;
        cout << "Number: " << eno << endl;
        cout << "Job NAME: " << job << endl;
        cout << "Salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Salary after bonus: " << calculateSalaryAfterBonus() << endl; // Call the calculation method
    }
};

int main() {
    HRdata user[5];
    for (int i = 0; i < 2; i++) { // Limit input to 2 employees for testing
        int n = (i + 1);
        int bonus; // Changed from float to int, as bonus is typically an integer percentage
        string name, job;

        cout << "Enter Ename " << n << ": ";
        cin >> name;
        cout << "Enter Job: ";
        cin >> job;
        cout << "Enter Bonus (%): "; // Clarified input prompt
        cin >> bonus; // Ensure bonus is read as an integer
        user[i].getdata(n, name, job, bonus);
    }
    for (int i = 0; i < 2; i++) {
        cout << "*******************************" << endl;
        user[i].showdata();
    }

    return 0; // Added return statement for main
}
