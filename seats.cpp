#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int one=0;
        int count=0;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'&&i!=s.size()-1){
                count++;
            }
            else if(s[i]=='1'){
                if(one ==1){
                    sum+=count/3;
                    count=0;
                    sum++;
                }else{
                    sum+=(count+1)/3;
                    one=1;
                    count=0;
                    sum++;
                }
            }else if(s[i]=='0'&&i==s.size()-1&&one==1){
                count++;
                sum+=(count+1)/3;
            }else if(s[i]=='0'&&i==s.size()-1&&one==0&&count>0){
                count++;
                sum+=count/2;
            }else if(s[i]=='0'&&i==s.size()-1&&one==0&&count==0){
                count++;
                sum+=count;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}