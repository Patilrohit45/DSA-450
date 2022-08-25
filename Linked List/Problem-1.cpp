#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};
void insertHead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertTail(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
     tail=temp;
}
Node* reverseList(Node* head)
{
    Node* newNode = NULL;
    while(head!=NULL)
    {
        Node* next = head->next;
        head->next = newNode;
        newNode = head;
        head = next;
    }
   
    return newNode;
}
void printList(Node* head)
{
    Node* temp = head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    printList(head);

    insertTail(tail,12);
    printList(head);

    insertTail(tail,22);
    printList(head);

   head = reverseList(head);
    printList(head);

    return 0;

}