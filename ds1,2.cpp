#include<iostream>
using namespace std;

struct freq{
    int no;
    int flag;
    int count;
};


int main(){
    int  i;
    struct freq a[10];
    for(i = 0;i<10;i++){
        cin>>a[i].no;
        a[i].flag;
        a[i].count;
    }
    int cnt;
    for(i = 0;i<10;i++){
        cnt =0;
        if(a[i].flag ==0){
            a[i].flag =1;
            cnt =1;
            for(int  j =i+1;j<10;j++){
                if(a[j].flag == 0){
                    if(a[i].no == a[j].no){
                        cnt++;
                        a[j].flag = 1;
                    }

                }
            }
        }
        a[i].count = cnt;
    }
  
    return 0;
}