#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int s1=0;
        int s2=0;
        int i=0;
        do{
            if(i%2==0){
                s1+=pow(2,i);
            }else{
                s2+=pow(2,i);
            }
            i++;
        }while((s1<=a||s1<=b)&&(s2<=a||s2<=b)&&(s1<=a||s2<=a)&&(s1<=b||s2<=b));
        cout<<i-1<<endl;
    }
    return 0;
}