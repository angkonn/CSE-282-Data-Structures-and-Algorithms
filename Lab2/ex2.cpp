// Write a C++ program to insert a new node at the end of a Singly Linked
// List [Consider all edge cases].

#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};

void insert_at_end(node **head, int n){
    node* lastnode = new node(n);
    if(*head == NULL) {
        *head = lastnode;
    }
    else {
        node* temp = *head;
        while(temp->next!=NULL)
            temp = temp->next;
        temp->next= lastnode;
    }
}

void traverseSLL(node *head){
    node *a = head;
    while(a != NULL){
        cout << a->data <<" ";
        a = a->next;
    }
}


int main() {
    node* head = NULL;

    insert_at_end(&head, 40);
    insert_at_end(&head, 41);
    insert_at_end(&head, 43);
    insert_at_end(&head, 45);

    cout << "Linked list: ";
    traverseSLL(head);

    return 0;
}
