//  Write a C++ program to insert an element at k th position in a singly linked list. [Consider possible edge cases]

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

node* consLL(int A[], int A_size){
    node* head = new node(A[0]);
    node* current= head;
    for (int i = 1; i < A_size; i++)
    {
        node* temp = new node(A[i]);

            current->next = temp;
            current= temp;

    }
    return head;
}

node *in_kth(node *head, int k, int data)
{
    node* newnode = new node(data);
    node* temp1= head;
    int i=1;
    while (i < k-1)
    {
        temp1= temp1->next;
        i++;
    }
    node* temp2= temp1->next;

    temp1->next = newnode;
    newnode->next = temp2;

    return head;
}


void traverselist(node* head){

    while (head!= NULL)
    {
        cout<< head->data<<" ";
        head= head->next;
    }

}
int main()
{
    int A[] = {45, 46, 12, 34, 43, 23,90};
    node *head;
    head= consLL(A , 7);

    cout<<"Before insertation"<<endl;
    traverselist(head);

    in_kth(head,5,50);

    cout<<"\n"<<"after insertation"<<endl;
    traverselist(head);
    return 0;
}
