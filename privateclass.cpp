#include<iostream>
using namespace std;
class access{
    private: 
    void gpa(){
    int currentgpa;
    }
    public:
    string name;
    int roll;
    string degree;
    string hostel;
    void top(int n){
      int currentgpa = n;

    }
    void cgpa(){
        cout<<gpa<<endl;
    }
};
access a;
int n;

void display(){
    cout<<"Name: "<<a.name<<endl<<"Roll no. : "<<a.roll<<endl<<"Degree : "<<a.degree<<endl<<"Hostel"<<a.hostel<<endl;
    a.cgpa();
    operation();
    }
    void updatedetail(){
        cout<<"name: ";
        cin>>a.name;
        cout<<"roll no.: ";
        cin>>a.roll;
        cout<<"degree: ";
        cin>>a.degree;
        
        updatehostel();
        
        updategpa();

        display();
    }

    void updategpa(){
        cout<<"CGPA: ";
        cin>>n;

    }
    void updatehostel(){
        cout<<"hostel: ";
        cin>>a.hostel;

    }

    int operation(){
        int op;
        cout<<"choose operation: "<<endl<<"1. add detail"<<endl<<"2. update detail"<<endl<<"3. update cgpa"<<endl<<"4.update hostel"<<endl<<"5.display details"<<endl<<"6. end program"<<endl;
        cin>>op;
        if(op==1){
            updatedetail();
        }
        else if(op==2){
            updatedetail();
        }
        else if(op == 3){
            updategpa();
            operation();
        }
        else if(op == 4){
            updatehostel();
            operation();
        }
        else if(op==5){
            display();
        }
        else if(op==6){
            return 0;
        }
    }
    int main(){
        operation();

        return 0;

    }