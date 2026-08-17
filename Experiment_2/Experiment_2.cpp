#include <iostream>
#include <string>
using namespace std;

// 1. BASE CLASS (The parent)
class Vehicle {
protected: 
    // PROTECTED: Hidden from the outside, but shared with the child class
    string brand;
};

// 2. DERIVED CLASS (The child)
class ElectricScooter : public Vehicle {
private:
    // PRIVATE: Completely hidden. Only functions inside this block can use it.
    int battery;

public:
    // PUBLIC: Wide open. The main() function can use these directly.
    void setDetails(string b, int bat) {
        brand = b;       // Safely setting the protected variable
        battery = bat;   // Safely setting the private variable

    }
    void showDetails() {
        cout << "Vehicle Brand: " << brand << endl;
        cout << "Battery Level: " << battery << "%" << endl;
    }
};

int main() {
    // 1. Build the object
    ElectricScooter myScooter;

    // 2. Use the public function to set the data
    myScooter.setDetails("TVS iQube S", 85);

    // 3. Use the public function to print the data
    myScooter.showDetails();

    return 0;
}//End of main