/*Write a program in C++ to find the distance between 2 points using structures and functions:
•	Input coordinates for the 2 points: (s1.x, s1.y) = (4,5)
                                                                        (s2.x, s2.y) = (3,6)
•	Find the distance between the 2 points: ((4-3) ^2 +(5-6) ^2) = 2
*/
  
#include <iostream>
#include <cmath> // For sqrt and pow functions
using namespace std;

// Define a structure to hold the coordinates of a point
struct cords {
    float x; // x-coordinate
    float y; // y-coordinate
};

// Function to calculate and print the distance between two points
void distance(float x1, float y1, float x2, float y2) {
    // Calculate the distance using the distance formula: sqrt((x2 - x1)^2 + (y2 - y1)^2)
    float dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << "Distance: " << dist << endl; // Print the calculated distance
}
int main() {cords pt1,pt2;
    cout<<"Please enter cords1"<<endl;
    cin>>pt1.x>>pt1.y;
    cout<<"Please enter cords2"<<endl;
    cin>>pt2.x>>pt2.y;
    distance(pt1.x,pt1.y,pt2.x,pt2.y);
}
