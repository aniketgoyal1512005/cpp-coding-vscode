#include<iostream>
using namespace std;

class Class{
    public: 
    Class(){
        cout<<"constructor called"<<endl;
    }
    ~Class(){
        cout<<"deconstructor called"<<endl;


    }
};

int main(){
    Class c;
    
    return 0;
}