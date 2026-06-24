#include<iostream>
using namespace std;

inline int cube(int x){
    return x*x*x;
}

int main(){
    int x;
    cin>>x;
    cout<<"cube : "<<cube(x)<<endl;

    return 0;
}