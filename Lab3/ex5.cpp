// Write a C++ program to delete the first node of a DLL. [Consider possible edge cases
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
node *del_first(node *head)
{
    if (head == NULL)
    {
       cout<<"empty linklist";
        return 0;
    }
     if (head->next == NULL)
    {
       delete head;
        return 0;
    }


    node *temp = head;
    head = head->next;
    head->bak = NULL;


    delete temp;
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
    cout<<"before deletation"<<endl;
    traverseList(head);
    head = del_first(head);
    cout<<"\n"<<"after deletation at first"<<endl;
    traverseList(head);

    return 0;
}
