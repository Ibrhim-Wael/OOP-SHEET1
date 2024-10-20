/*Create a structure named Book to store book details like title, author, and price. 
Write a C ++program 
•	input details for three books
•	write a function to find the most expensive and the lowest priced books, and display their information
*/

#include <iostream>
#include <string>
using namespace std;
struct Book {
    string title;
    string author;
    int price;
};
void displayBooks(Book books[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Book " << (i + 1) << " - Title: " << books[i].title
             << ", Author: " << books[i].author
             << ", Price: $" << books[i].price << endl;
    }
}
void displayHighestAndLowestNumbers(Book books[], int size) {
    // Initialize variables to store the highest and lowest price indexes
    int highestIndex = 0, lowestIndex = 0;

    // Loop through the array to find the highest and lowest priced books
    for (int i = 1; i < size; i++) {
        if (books[i].price > books[highestIndex].price) {
            highestIndex = i;
        }
        if (books[i].price < books[lowestIndex].price) {
            lowestIndex = i;
        }
    }

    // Display the numbers (1-based index) of the highest and lowest priced books
    cout << "\nThe highest priced book is Book " << (highestIndex + 1) << endl;
    cout << "The lowest priced book is Book " << (lowestIndex + 1) << endl;
}

int main() {
    Book books[3] ;
    for (int i = 0; i < 3; i++) {
        string title,author;
        int price;
        cout<<"Enter books "<<(i+1)<<"'s Title : ";
        cin>>title;
        cout<<"Enter author "<<(i+1)<<"'s Author : ";
        cin>>author;
        cout<<"Enter price : ";
        cin>>price;
        books[i].title = title;
        books[i].author = author;
        books[i].price = price;
    }
    displayBooks(books, 3);
    displayHighestAndLowestNumbers(books, 3);
}
