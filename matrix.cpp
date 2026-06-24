#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"Enter dimensions of Matrix A: ";
    cin>>a;
    cout<<" , ";
    cin>>b;
    cout<<"Enter dimensions of Matrix B: ";
    cin>>c;
    cout<<" , ";
    cin>>d;
    if(b!=c){
        cout<<"Not Possible";
        return 0;
    }
    int A[a][b];
    int B[c][d];
    cout<<"Enter values of Matrix A: ";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter values of Matrix B: ";
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            cin>>B[i][j];
        }
    }
    int C[a][d];
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            C[i][j]=0;
            for(int k=0;k<b;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}