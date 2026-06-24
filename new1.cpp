#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

void insEnd(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
}

void disp(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void delNode(Node*& head, int value) {
    if (head == nullptr) return;

    if (head->data == value) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != value)
        temp = temp->next;

    if (temp->next == nullptr)
        cout << "Value not found!" << endl;
    else {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}

int main(){
    Node* head = nullptr;

    insEnd(head, 10);
    insEnd(head, 20);   
    insEnd(head, 30);

    cout << "Linked List: ";
    disp(head);

    delNode(head, 20);
    cout << "After deleting 20: ";
    disp(head);

    return 0;   
}