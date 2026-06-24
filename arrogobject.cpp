#include <iostream>
using namespace std;

class Rectangle {
public:
    double length, width;

    void getData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    double area() {
        return length * width;
    }
};

int main() {

    Rectangle r[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nRectangle " << i + 1 << ":\n";
        r[i].getData();
    }

    cout << "\n--- Areas of Rectangles ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "Rectangle " << i + 1 << " area = " << r[i].area() << endl;
    }

    return 0;
}
