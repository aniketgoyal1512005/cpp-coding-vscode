#include <iostream>
using namespace std;

struct Node{
    char ch;
    int freq;
    Node *left, *right;
};
Node* cn(char c, int f){
    Node* n = new Node();
    n->ch = c;
    n->freq = f;
    n->left = n->right = NULL;
    return n;
}
void insertion(Node* arr[], int &size, Node* temp){
    int i = size - 1;
    while (i >= 0 && arr[i]->freq > temp->freq){
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = temp;
    size++;
}
void print(Node* root, string c){
    if (!root) return;

    if (!root->left && !root->right){
        cout << root->ch << "\t" << c << endl;
        return;
    }

    print(root->left, c + "0");
    print(root->right, c + "1");
}

int main() {

    char chars[] = {'a','b','c','d','e','f'};
    int freq[]   = {5, 9, 12, 13, 16, 45};
    int n = 6;

    Node* arr[100];
    int size = 0;

    for (int i = 0; i < n; i++) {
        insertion(arr, size, cn(chars[i], freq[i]));
    }   

    while (size > 1){
        Node* left = arr[0];
        Node* right = arr[1];
        for (int i = 2; i < size; i++)
            arr[i - 2] = arr[i];

        size -= 2;

        Node* internal = cn('$', left->freq + right->freq);
        internal->left = left;
        internal->right = right;

        insertion(arr, size, internal);
    }

    print(arr[0], "");

    return 0;
}
