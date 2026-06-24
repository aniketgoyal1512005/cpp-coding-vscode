#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    int count=0;
    for(int i =0;i<n;i++){
        cin>>s;
        if(s=="Tetrahedron"){
            count=count+4;
        }else if(s=="Cube"){
            count=count+6;
        }else if(s=="Octahedron"){
            count=count+8;
        }else if(s=="Dodecahedron"){
            count=count+12;
        }else if(s=="Icosahedron"){
            count=count+20;
        }    
    }
cout<<count;
}