#include<iostream>
using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        int sum=0;
        int count=0;
        for(int i = 0;i<s.length();i++){
            if(s[i]=='('){
                sum++;
            }
            else if(s[i]==')'){
                sum--;
            }else if(s[i]=='*'){
                
                count++;
            }
            if(sum+count<0){
                return false;
            }
        }
        return count>=abs(sum);
    }
};

int main(){
//     int sum=0;
//     int count=0;
//     string s;
//     cin>>s;
//     for(int i = 0;i<s.length();i++){
//         if(s[i]=='('){
//             sum++;
//         }
//         else if(s[i]==')'){
//             sum--;
//         }else if(s[i]=='*'){
            
//             count++;
//         }
//         if(sum+count<0){
//             cout<<"false"<<endl;
//             return 0;
//         }
//     }
//     if(count>=abs(sum)){
//         cout<<"true"<<endl;
// }else{
//         cout<<"false"<<endl;
//     }
//     return 0;

    Solution sol;
    string s;
    cin>>s;
    if(sol.checkValidString(s)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}