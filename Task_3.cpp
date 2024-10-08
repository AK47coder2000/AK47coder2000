#include <iostream>
using namespace std;

class Box {
private:
    double length;   // Length of a box  
    double breadth;    // Breadth of a box
    double height;     // Height of a box

public:
    Box(double l = 1, double b = 1, double h = 1) {
        length = l;
        breadth = b;
        height = h;
    }

    void displayVolume() {
        double volume = length * breadth * height;
        cout << "Volume of the box is: " << volume << endl;
    }
};

int main() {
    Box b1;
    Box b2(2);
    Box b3(2, 3);
    Box b4(2, 3, 4);

    b1.displayVolume();
    b2.displayVolume();
    b3.displayVolume();
    b4.displayVolume();

    return 0;
}