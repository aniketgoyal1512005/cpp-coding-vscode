#include<iostream>
using namespace std;

class rectangle {
    public:
    int length, breath;
    rectangle() {
        length = 0;
        breath = 0;
    }
    rectangle(int l, int b) {
        length = l;
        breath = b;
    }
    rectangle(int side){
        length = side;
        breath = side;
    }
    void area() {
        cout << "Area: " << length * breath << endl;
    }
};

int main() {
    int l, b;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breath: ";
    cin >> b;

    rectangle r1;
    rectangle r2(l, b);
    rectangle r3(l);

    r1.area();
    r2.area();
    r3.area();

    return 0;
}
