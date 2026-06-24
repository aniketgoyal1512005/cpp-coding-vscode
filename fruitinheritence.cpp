#include<iostream>
using namespace std;

class fruit {
public:
    void showTotal(int total){
        cout<<"Total fruits: "<<total<<endl;
    }
};

class apple:public fruit{
public:
    int numApples;
    apple(){
        numApples = 0;
    }
    void setApples(int n){
        numApples = n;
    }
    void showApples(){
        cout << "Number of apples: " << numApples << endl;
    }
};

class mango : public fruit {
public:
    int numMangoes;
    mango(){
        numMangoes = 0;
    }
    void setMangoes(int n){
        numMangoes = n;
    }
    void showMangoes(int numMangoes){
        cout << "Number of mangoes: " << numMangoes << endl;
    }
};

int main() {
    apple a;
    mango m;

    a.setApples(10);
    int numMangoes = 15;

    int total = a.numApples + numMangoes;

    a.showTotal(total);
    a.showApples();
    m.showMangoes(numMangoes);
}