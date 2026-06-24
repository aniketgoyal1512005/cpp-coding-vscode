#include<iostream>
using namespace std;

class account{
    int account_number;
    string name;
    double balance;
    static int totalacc;

    public:
    account(){
        account_number = 0;
        name = "";
        balance = 0;
        totalacc++;
    }
    account(int id,string n,double b){
        account_number = id;
        name = n;
        balance = b;
        totalacc++;
    }
    inline double getbalance(){
        return balance;
    }
    void deposit(int amt){
        balance +=amt;
    }
    void withdraw(int amt){
        balance -=amt;
    }
    void display(){
        cout<<"account id: "<<account_number<<endl<<"Name: "<<name<<endl<<"balance: "<<balance<<endl;
    }
    friend void comparebalance(account a1,account a2);

};
int account::totalacc = 0;

    void comparebalance(account a1,account a2){
        if(a1.balance>a2.balance){
            cout<<"account 1 has more balance than 2"<<endl;
        } else if(a1.balance==a2.balance){
            cout<<"both have equal balance"<<endl;
        }else{
            cout<<"account 2 has more balance than 1"<<endl;
        }
}

int main(){
    int k;
    cout<<"enter number of accounts: ";
    cin>>k;
    account *number = new account[k];
    for(int i = 0;i<k;i++){
        int id;
        string n;
        double b;
        cout<<"enter data of account "<<i+1 <<": "<<endl;
        cout<<"enter id: ";
        cin>>id;
        cout<<"enter name: ";
        cin>>n;
        cout<<"enter balance amount: ";
        cin>>b; 
        number[i] = account(id,n,b);
    }
    number[0].deposit(500);
    number[1].withdraw(600);
    number[1].deposit(200);
    for(int i = 0;i<k;i++){
        number[i].display();
    }
    if(k>=2){
        comparebalance(number[0],number[1]);
    }
    return 0;
}