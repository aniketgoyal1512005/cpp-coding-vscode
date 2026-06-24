#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int result;

    int op1 = a + b + c;
    int op2 = a * b * c;
    int op3 = a + (b * c);
    int op4 = (a + b) * c;
    int op5 = a * (b + c);
    int op6 = (a * b) + c;

    result = max({op1, op2, op3, op4, op5, op6});

    cout << result << endl;
    return 0;
}
