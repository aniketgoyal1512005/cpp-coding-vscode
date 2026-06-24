#include <iostream>
#include<vector>
using namespace std;

int main(){

     int n,t, val;
     for(int i = 0;i<t;i++){
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> vec;

    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; ++i) {
        cin >> val;
        vec.push_back(val);

    }
    
}
}