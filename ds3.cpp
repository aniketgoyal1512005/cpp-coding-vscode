#include<iostream>
using namespace std;

#define SIZE 10

int arr[SIZE];
int top = 0;

void display() {
    if (top == -1) {
        cout<<"Stack is empty"<<endl;
    } else {
        cout<<"Stack elements: "<<endl;
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

void operation() {
    int k;
    cout<<"\nEnter operation:\n"
    <<"1. Push\n"
    <<"2. Pop\n"
    <<"3. Is Empty\n"
    <<"4. Is Full\n"
    <<"5. Display\n"
    <<"6. Peek (Top element)\n"
    <<"7. End operation\n";
    do {
    cout<<"Choice: ";
        cin >> k;

        switch (k) {
            case 1: {
                if (top != SIZE - 1) {
                    int val;
                    cout<<"Enter value: ";
                    cin>>val;
                    arr[top] = val;
                    top ++;
                    cout<<"Pushed "<<val<<endl;
                } else {
                    cout<<"Stack is full"<<endl;
                }
                break;
            }

            case 2: {
                if (top != -1) {
                    cout<<"Popped "<<arr[top]<<endl;
                    top--;
                } else {
                    cout<<"Stack is empty"<<endl;
                }
                break;
            }

            case 3: {
                if (top == 0)
                    cout<<"Yes, stack is empty"<<endl;
                else
                    cout<<"No, stack is not empty"<<endl;
                break;
            }

            case 4: {
                if (top == SIZE - 1)
                    cout<<"Yes, stack is full"<<endl;
                else
                    cout<<"No, stack is not full"<<endl;
                break;
            }

            case 5: { 
                display();
                break;
            }

            case 6: { 
                if (top == 0) {
                    cout<<"Stack is empty"<<endl;
                } else {
                    cout<<"Top element is: "<<arr[top]<<endl;
                }
                break;
            }

            case 7:
                cout<<"Ending operations  "<<endl;
                break;

            default:
                cout<<"Invalid choice"<<endl;
        }

    } while (k!=7);
}

int main() {
    operation();
    
    return 0;
}
