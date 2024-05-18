// Write a C++ program to insert a node at the end of a DLL. [Consider possible edge cases]

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *bak;
    node(int x)
    {
        data = x;
        next = NULL;
        bak = NULL;
    }
    node(int x, node *f, node *b)
    {
        data = x;
        next = f;
        bak = b;
    }
};
node *in_last(node *head, int data)
{

    node *last = new node(data, NULL, NULL);

    node *temp = head;
    while (temp->next != NULL)
    {
       temp = temp->next;
    }
    temp->next = last;
    last->bak = temp;

    return head;
}


void traverseList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node* createDLL(int A[], int Asize)
{
    node *head = NULL, *temp = NULL, *prev = NULL;
    head = new node(A[0]);
    prev = head;
    for (int i = 1; i < Asize; i++)
    {
        temp = new node(A[i], NULL, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

int main()
{
    int A[] = {23, 43, 54, 35, 26,47};
    node *head;
    head = createDLL(A, 6);
    cout<<"before insertation"<<endl;
    traverseList(head);
    head = in_last(head,50);
    cout<<"\n"<<"after insertation at last"<<endl;
    traverseList(head);

    return 0;
}
