#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, breadth;

    // Default constructor
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    // Parameterized constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Square constructor
    Rectangle(int side) {
        length = side;
        breadth = side;
    }

    void getData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r[3];

    cout << "\n--- Enter Data for Rectangles ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nRectangle " << i + 1 << ":\n";
        r[i].getData();
    }

    cout << "\nAreas of Rectangles:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Rectangle " << i + 1 << " area = " << r[i].area() << endl;
    }

    cout << "\n--- Using Different Constructors ---\n";
    Rectangle r1;        // Default constructor
    Rectangle r2(5, 10); // Parameterized constructor
    Rectangle r3(7);      // Square constructor

    cout << "Default constructor rectangle area = " << r1.area() << endl;
    cout << "Parameterized constructor rectangle area = " << r2.area() << endl;
    cout << "Square constructor area = " << r3.area() << endl;
    

    return 0;
}
