#include <iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int difference = n-a-b;
    int result;
    if(difference<=1 ){
        result = n-a;
    }else{
        result = n-a-difference+1;
    }
    cout<<result<<endl;
    return 0;


}