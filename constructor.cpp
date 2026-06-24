#include <iostream>
using namespace std;

class Classname{
    public: 
    int roll;
    Classname(const Classname &obj){
        roll = obj.roll;    

    }
};