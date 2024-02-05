
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
void preOrderIterative(Node* root){
    if(root == nullptr){
        return; 
    }
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        cout<<root->data<<" ";
        if(root->right!=nullptr){
            st.push(root->right);
        }
        if(root->left!=nullptr){
            st.push(root->left);
        }
    }
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
 
    preOrderIterative(root);
 
    return 0;
}