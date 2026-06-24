#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(long long num){

    if(num <= 1){
        return false;
    }

    for(long long i = 2; i * i <= num; i++){

        if(num % i == 0){
            return false;
        }
    }

    return true;
}

bool issquare(long long num){

    long long root = sqrt(num);

    if(root * root == num){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int n;
    cin >> n;

    long long a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){

        long long root = sqrt(a[i]);

        if(issquare(a[i]) && isPrime(root)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}