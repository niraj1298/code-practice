#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *leftNode;
    Node *rightNode;
};

class BST{
public:
    Node *root;
    BST(){
        root = NULL;
    }
    void insert(int);
    void display(Node *);
    void inorder(Node *);
    void preorder(Node *);
    void postorder(Node *);
};
void BST::insert(int value){
    Node *temp = new Node;
    temp->data = value;
    temp->leftNode = temp->rightNode = NULL;

    if(root == NULL){
        root = temp;
    } else {
        Node *parent;
        Node *current = root;
        while(true){
            parent = current;
            if(value < parent->data){
                current = current->leftNode;
                if(current == NULL){
                    parent->leftNode = temp;
                    return;
                }
            } else{
                current = current-> rightNode;
                if(current == NULL){
                    parent->rightNode = temp;
                    return;
                }
            }
        }
    }

}
void BST::display(Node *parent){
    if(parent != NULL){
        display(parent->leftNode);
        cout<<parent->data<<"";
        display(parent->rightNode);
    }
}
void BST::inorder(Node *parent) {
    if (parent != NULL) {
    inorder(parent->leftNode);
    cout<<parent->data<<"";
    inorder(parent->rightNode);
}
}
void BST::postorder(Node *parent) {
    if (parent != NULL) {
        postorder(parent->leftNode);
        postorder(parent->rightNode);
        cout<<parent->data<<"";
    }
}

int main(){
     BST bst;
     bst.insert(10);
     bst.insert(11);
     bst.insert(15);
     bst.insert(3);
     bst.insert(12);
     bst.insert(2);
     bst.insert(4);
     bst.insert(9);
     bst.insert(20);
     bst.insert(6);
     bst.insert(14);
     bst.insert(8);
     cout<<"Display Tree: "<<endl;
     cout<<endl;
     cout<<"In-Order Traversal: "<<endl;
     bst.inorder(bst.root);
     cout<<endl;
     cout << "Pre-Order Traversal:" << endl;
     bst.preorder(bst.root);
     cout<<endl;
     bst.postorder(bst.root);
     bst.postorder(bst.root);
     cout << endl;
     system("pause");
     return 0;
}
