#include <iostream>
using namespace std;

class BST {
    int val;
    BST *left, *right;

public:
    BST(int value){
        val = value;
        left = right = nullptr;
    }

    void insert(int value){
        if (value < val){
            if (left == nullptr){
                left = new BST(value);
            }else{
                left->insert(value);
            }
        }else{
            if(right == nullptr){
                right = new BST(value);
            }else{
                right->insert(value);
            }
        }
    }

    void search(int value){
        if (val == value){
            cout << value << " found" << endl;
            return;
        }
        if (value < val){
            if (left != nullptr) {
                left->search(value);
            } else {
                cout << value << " not found" << endl;
            }
        } else{
            if (right != nullptr) {
                right->search(value);
            } else {
                cout << value << " not found" << endl;
            }  
        }
    }

    void preorder(){
        cout << val << " ";
        if (left != nullptr){
            left->preorder();
        }
        if (right != nullptr){
            right->preorder();
        }
    }
};

int main(){
    BST *root = new BST(10);

    root->insert(5);
    root->insert(15);
    root->insert(13);
    root->insert(11);
    root->insert(12);
    root->insert(18);
    root->insert(1);
    cout<<"Preorder Traversal: ";
    root->preorder();
    cout<<endl;

    int key = 7;
    root->search(key);
    return 0;
}
