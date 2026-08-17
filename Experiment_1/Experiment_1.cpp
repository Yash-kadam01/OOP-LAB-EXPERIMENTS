#include <iostream>
using namespace std;

int main() {
    // 1. CONSTANT
    const float PI = 3.14; 

    // 2. VARIABLES & DATA TYPES
    int Age;           // Integer
    float circleRadius;    // Floating point number
    string name;      // String of characters
    bool isStudent = true; // Boolean (True/False)

    // 3. INPUT/OUTPUT (I/O)
    cout << "Enter your name: "; 
    cin >> name;

    cout << "Enter your age: ";
    cin >> Age;

    cout << "Enter a radius for a circle (e.g., 5.5): ";
    cin >> circleRadius;

    // 4. OPERATORS
    // We use the multiplication operator (*) here
    float circleArea = PI * circleRadius * circleRadius; 
    
    // We use the addition operator (+) here
    int ageNextYear = Age + 1;

    // FINAL OUTPUT
    cout << "\n--- Results ---\n";
    cout << "Name: " << name << "\n";
    cout << "Age next year: " << ageNextYear << "\n";
    cout << "Area of your circle: " << circleArea << "\n";
    
    if (isStudent) {
        cout << "Status: Active Student\n";
    }

    return 0;
}