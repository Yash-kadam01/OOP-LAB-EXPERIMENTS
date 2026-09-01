#include <iostream>
using namespace std;

class Box {
private:
    int value;

public:
    // 1. Default Constructor
    Box() {
        value = 0;
        cout << "[+] Default Constructor called\n";
    }

    // 2. Parameterized Constructor
    Box(int v) {
        value = v;
        cout << "[+] Parameterized Constructor called\n";
    }

    // 3. Copy Constructor
    Box(const Box& other) {
        value = other.value;
        cout << "[+] Copy Constructor called\n";
    }

    // 4. Move Constructor
    Box(Box&& other){
        value = other.value; 
        other.value = 0; 
        cout << "[+] Move Constructor called\n";
    }
};

int main() {
    cout << "--- Testing Constructors ---\n\n";
    Box a;                  // Calls Default Constructor
    Box b(10);              // Calls Parameterized Constructor
    Box c = b;              // Calls Copy Constructor
    Box d = move(c);        // Calls Move Constructor

    cout << "\n--- Exiting Program ---\n";
    return 0;
}