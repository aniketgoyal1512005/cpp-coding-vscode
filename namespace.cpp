#include <iostream>
using namespace std;

namespace first {
    int value = 10;
    void show() {
        cout << "First namespace value: " << value << endl;
    }
}

namespace second {
    int value = 20;
    void show() {
        cout << "Second namespace value: " << value << endl;
    }
}

int main() {
    first::show();
    second::show();

    cout << "Access first namespace variable directly: " << first::value << endl;
    cout << "Access second namespace variable directly: " << second::value << endl;

    return 0;
}
