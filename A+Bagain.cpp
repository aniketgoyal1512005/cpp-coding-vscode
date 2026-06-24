#include<iostream>
#include<string>
using namespace std;

int main (){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
    string number;
    cin>>number;
    int A,B;
    A = number[0]-'0';
    B = number[1]-'0';
    int sum = A+B;
    cout<<sum<<endl;
    }
    return 0;

}