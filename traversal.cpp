#include<iostream>
using namespace std;


class Node{

    public:
    int data;
    Node*left, *right;

    Node(int value){
        data = value;
        left = right = NULL;
    }

};

void PreOrder(Node *root){
    if(root == NULL)
    return;

    //Node
    cout<<root->data<<" ";
    //left
    PreOrder(root->left);
    //right
    PreOrder(root->right);
}

void InOrder(Node *root){
    if(root == NULL)
    return;

    //left
    InOrder(root->left);
    //Node
    cout<<root->data<<" ";
    //right
    InOrder(root->right);
}

void PostOrder(Node *root){
    if(root == NULL)
    return;

    //left
    PostOrder(root->left);
    //right
    PostOrder(root->right);
    //Node
    cout<<root->data<<" ";
}

Node * BinaryTree(){
    int x;
    cin>>x;
    if(x==-1)
    return NULL;

    Node* temp = new Node(x);
    //Left side create
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left = BinaryTree();
    //Right side create
    cout<<"Enter the Right child of "<<x<<" : ";
    temp->right = BinaryTree();
    return temp;

}


int main(){

    cout<<"Enter the root node: ";
    Node *root;
    root = BinaryTree();
    //Tree Creation Code

    //PreOrder Print;
    cout<<"PreOrder: ";
    PreOrder(root);

    //InOrder Print
    cout<<"\nInOrder: ";
    InOrder(root);

    //PostOrder
    cout<<"\nPostOrder: ";
    PostOrder(root);

}