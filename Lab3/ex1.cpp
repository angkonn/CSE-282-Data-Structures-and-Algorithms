// Write a C++ program to find the position of an element from a Singly
// Linked List [Linear Search].

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

void position( node* head,int data){
    node* temp= head ;
    int i =1;
    while ( temp !=NULL )
    {

        if (temp-> data == data)
        {
            cout <<"\n"<<data <<" is at the position "<< i <<endl;
            return;
        }
        temp=temp->next;
        i++;
    }
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
    traverselist(head);
    position(head,43);


    return 0;
}
