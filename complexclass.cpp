#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    void set() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }

    Complex sum(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;
        return result;
    }
};

int main() {
    Complex a, b, result;
    cout << "Enter first complex number:\n";
    a.set();
    cout << "Enter second complex number:\n";
    b.set();
    cout << "\nFirst complex number: ";
    a.display();
    cout << "Second complex number: ";
    b.display();
    result = a.sum(b);
    cout << "Sum: ";
    result.display();
    return 0;
}
