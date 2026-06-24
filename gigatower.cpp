#include<iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    long long t = stoll(n);
    if(t==-8||t==-7||t==-6||t==-5||t==-4||t==-3||t==-2||t==-1){
        cout<<8-t<<endl;
        return 0;
    }else{
    for(int j = 0; j < 10; j++) {
        t++;
        string r = to_string(t);
        for(int i = 0; i < r.size(); i++) {
            if(r[i] == '8') {
                cout << j + 1 << endl;
                return 0;
            }
        }
    }
    }
}
