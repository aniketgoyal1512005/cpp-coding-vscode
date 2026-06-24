#include<iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void display() const {
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

int main() {
    Student s1(101,"Aniket");

    s1.display();

    return 0;
}
