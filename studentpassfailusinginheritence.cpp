#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int RollNo;
    string Name;
public:
    void GetDetails() {
        cout << "Enter student roll number: ";
        cin >> RollNo;
        cout << "Enter name of the student: ";
        cin >> Name;
    }
    void DisplayDetails() {
        cout << RollNo << "\t\t" << Name << "\t";
    }
};

class Marks : public Student {
protected:
    int Subject1, Subject2;
public:
    void GetMarks(){
        cout << "Enter the marks of subject 1: ";
        cin >> Subject1;
        cout << "Enter the marks of subject 2: ";
        cin >> Subject2;
    }
    void DisplayMarks(){
        cout<<Subject1<<"\t\t"<<Subject2<<"\t\t";
    }
};

class Result:public Marks{
private:
    int TotalMarks;
    string Status;
public:
    void CalculateResult(){
        TotalMarks=Subject1+Subject2;
        if(TotalMarks>=60){
            Status="PASSED";
        }
        else{
            Status="FAILED";
        }
    }
    void DisplayResult() {
        cout<<TotalMarks<<"\t\t\t"<<Status<<endl;
    }
};

int main(){
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Result students[100];

    for (int i = 0; i < n; i++) {
        students[i].GetDetails();
        students[i].GetMarks();
        students[i].CalculateResult();
    }

    cout<<"\nRoll No.\tName\tSubject1\tSubject2\tTotal Marks Obtained\tResult\n";
    for (int i = 0; i < n; i++) {
        students[i].DisplayDetails();
        students[i].DisplayMarks();
        students[i].DisplayResult();
    }

    return 0;
}
