#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, breath;
    Rectangle(){
        length = 0;
        breath = 0;
    }
    Rectangle(int l, int b) {
        length = l;
        breath = b;
    }

    Rectangle(int side) {
        length = side;
        breath = side;
    }

    void getData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breath: ";
        cin >> breath;
    }

    int area() {
        return length * breath;
    }
};

int main() {
    Rectangle r[3];

    cout << "\n--- Enter Data for Rectangles ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nRectangle " << i + 1 << ":\n";
        r[i].getData();
    }

    cout << "\n Areas of Rectangles \n";
    for (int i = 0; i < 3; i++) {
        cout<<"Rectangle "<<i + 1<<" area = "<<r[i].area()<<endl;
    }

    cout <<"\n--- Using Different Constructors ---\n";
    Rectangle r1;
    Rectangle r2(5, 10);
    Rectangle r3(7);

    cout<<"Default constructor rectangle area = "<<r1.area()<<endl;
    cout<<"Parameterized constructor rectangle area = "<<r2.area()<<endl;
    cout<<"Square constructor area = "<<r3.area()<<endl;

    return 0;
}
