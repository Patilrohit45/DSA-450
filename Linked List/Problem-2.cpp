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
Node* reverseListwithK(Node* head,int k)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* next;
    int cnt=0;
    while(curr!=NULL && cnt<k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
        
    }
    if(next!=NULL)
    {
        head->next = reverseListwithK(next,k);
    }
    return prev;
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
    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;
    //printList(head);

    insertTail(tail,2);
    insertTail(tail,3);
    insertTail(tail,4);
    insertTail(tail,5);
    insertTail(tail,6);
    insertTail(tail,7);
    insertTail(tail,8);

    int k =  4;
   head = reverseListwithK(head,k);
    printList(head);

    return 0;

}