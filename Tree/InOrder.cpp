
#include <iostream>
#include <stack>
using namespace std;
 
// Data structure to store a binary tree node
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

//MARK:- ITERATIVE WAY
void inOrderIterative(Node* root){
  stack<Node*>st;
    Node* node = root; 
  while(true){
    if(node != nullptr){
        st.push(node);
        node = node->left ;
    }else{
        if(st.empty()==true) break;
        node = st.top();
        st.pop();
        cout<<node->data<<" ";
        node = node->right;
    }
  }
}

//MARK:- RECURSIVE WAY
void inOrderRecursive(Node* root){
    if(root == nullptr){
        return;
    }
    inOrderRecursive(root->left);
    cout<<root->data<<" ";
    inOrderRecursive(root->right);
}
int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    inOrderIterative(root);
    cout<<endl;
    inOrderRecursive(root);
    return 0;
}