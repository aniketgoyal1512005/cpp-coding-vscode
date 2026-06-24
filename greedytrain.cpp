#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    int ar[t];
    int dt[t];
    for(int i = 0;i<t;i++){
        cin>>ar[i];
    }
    for(int i = 0;i<t;i++){
        cin>>dt[i];
    }
    sort(ar,ar+t);
    sort(dt,dt+t);
    int count = 0;
    int max = 0;
int i = 0,j=0;
while(i<t && j<t){
    if(ar[i]<=dt[j]){
        count++;
        i++;
        if(count>max){
            max = count;
        }
    }else{
        j++;
        
        count--;
    }
    }

cout<<max<<endl;
return 0;

}