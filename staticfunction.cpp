#include <iostream>
using namespace std;

class Student {
    int rno;
    string nm;

    static int c;

public:
    void setData(int a, string b){
        rno = a;
        nm = b;
        c++;
    }

    void show(){
        cout<<"Roll No: "<<rno<<", Name: "<<nm<<endl;
    }

    static void total(){
        cout<<"Total students = "<<c<<endl;
    }
};

int Student::c=0;

int main() {
    Student s1,s2;

    s1.setData(1,"Rahul");
    s2.setData(2,"Priya");

    s1.show();
    s2.show();

    Student::total();

    return 0;
}