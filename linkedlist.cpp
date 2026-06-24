#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = nullptr;
    }
};

int main(){
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = head;

    // Print the linked list
    node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;

    // Free the allocated memory
    curr = head;
    while (curr != nullptr) {
        node* temp = curr;
        curr = curr->next;
        delete temp;
    }
    

    return 0;
}
