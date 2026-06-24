#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    void set(int roll,string name) {
        this->roll=roll;
        this->name=name;
    }
    void display() {
        cout<<"Roll Number: "<<this->roll<<endl;
        cout<<"Name: "<<this->name<<endl;
    }
};

int main() {
    Student s1;
    s1.set(187,"Aniket");
    s1.display();

    return 0;
}
