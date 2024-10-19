/*1-	Write a program in C++ to display even numbers in n terms of natural numbers and their sum. Sample Output:
Input a number of terms: 7
•	The natural numbers up to 7th terms are: 1 2 3 4 5 6 7
•	The sum of the natural numbers is: 28*/ //Problem1
//Solution
#include <iostream>
using namespace std;
int main(){ 
int n;
cin>>n;
cout <<"The natural numbers up to "<<n<<"th terms are: ";
for(int i=1 ;i<=n;i++){
cout<<i<<" ";
}
int sum=0;
for(int i=1 ;i<=n;i++){
sum+=i;
}
cout <<"\nThe sum of the natural numbers is: "<<sum;
}
