#include <iostream>
using namespace std;

typedef struct Tree{
    int data;
    struct Tree* left;
    struct Tree* right;

    explicit Tree(int x){
        data = x;
        left = nullptr;
        right = nullptr;
    }

}tree;


void inOrder(tree* root){
    if (!root) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);

}

int main(){
    tree* root = new Tree(1);
    root->left = new Tree(2);
    root->left->left = new Tree(4);
    root->left->right = new Tree(5);
    root->right = new Tree(3);
    root->right->left = new Tree(6);
    root->right->right = new Tree(7);
    inOrder(root);
    return 0;
}
