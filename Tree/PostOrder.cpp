
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
void postOrderIterative(Node* root){
  if(root==nullptr){
    return;
  }
  stack<Node*>st1,st2;
  st1.push(root);
  while(!st1.empty()){
    root = st1.top();
    st1.pop();
    st2.push(root);
    if(root->left!=nullptr){
        st1.push(root->left);
    }
    if(root->right!=nullptr){
        st1.push(root->right);
    }
  }
  while(!st2.empty()){
    cout<<st2.top()->data<<" ";
    st2.pop();
  }
}

//MARK:- RECURSIVE WAY
void postOrderRecursive(Node* root){
    if(root == nullptr){
        return;
    }
    postOrderRecursive(root->left);

    postOrderRecursive(root->right);
        cout<<root->data<<" ";
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
 
    postOrderIterative(root);
    cout<<endl;
    postOrderRecursive(root);
    return 0;
}