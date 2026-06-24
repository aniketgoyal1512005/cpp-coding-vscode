#include<iostream>
using namespace std;

class Class{
    public:
    string name;
    int rollno;
    string hostel;

    void display(){
       cout<<"your name : "<<name<<endl;
    cout<<"roll number: "<<rollno<<endl; 
    }


};

int main(){
    Class c;
     cout<<"enter name : ";
        cin>>c.name;        
        cout<<"enter roll number: ";
        cin>>c.rollno;
    c.display();  
    return 0;
}