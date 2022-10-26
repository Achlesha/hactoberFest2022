#include<iostream>
using namespace std;

struct node{                                    // structure of a tree node
    int data;
    struct node *left;
    struct node *right;
};

void inorder_traversal(struct node *head){      // inorder traversal
    if(!head){
        return;
    }
    inorder_traversal(head -> left);
    cout << head -> data << " ";
    inorder_traversal(head -> right);
}

void preorder_traversal(struct node *head){     // preorder traversal
    if(!head){
        return;
    }
    cout << head ->data << " ";
    preorder_traversal(head -> left);
    preorder_traversal(head -> right);
}

void postorder_traversal(struct node *head){    // postorder traversal
    if(!head){
        return;
    }
    postorder_traversal(head -> left);
    postorder_traversal(head -> right);
    cout << head -> data << " ";
}

struct node *preOrderInput(){                   // Taking input in preorder format
    struct node *head = new struct node;
    cin >> head -> data;
    if(head -> data == -1){
        head = NULL;
        return head;
    }
    head -> left = preOrderInput();
    head -> right = preOrderInput();
    return head;
}

int main(){
    cout << "Enter tree data in preorder format (-1 for null): ";
    struct node * head = preOrderInput();
    cout << "Inorder Traversal: ";
    inorder_traversal(head);
    cout << endl;
    cout << "Preorder Traversal: ";
    preorder_traversal(head);
    cout << endl;
    cout << "Postorder Traversal: ";
    postorder_traversal(head);
    cout << endl;
    return 0;
}
