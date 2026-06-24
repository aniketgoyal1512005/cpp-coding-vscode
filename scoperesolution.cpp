#include <iostream>
using namespace std;

class C {
public: 
    static string name;
    void display();
};


string C::name;

void C::display() {
    cout << name << endl;
}

int main() {
    cin >> C::name;

    C c;
    c.display();

    return 0;
}
