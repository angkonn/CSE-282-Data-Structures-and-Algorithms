// Write a C++ program to insert a node at the beginning of a DLL. [Consider possible edge cases]
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
node *in_first(node *head, int data)
{
    node *first = new node(data, head, nullptr);
    if (head != NULL)
    {
        head->bak = first;
    }
    head = first;
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
        temp = new node(A[i], nullptr, prev);
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
    head = in_first(head,50);
    cout<<"\n"<<"after insertation at first"<<endl;
    traverseList(head);

    return 0;
}
