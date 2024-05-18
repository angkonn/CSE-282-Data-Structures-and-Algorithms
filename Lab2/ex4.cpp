//  Write a C++ program to delete the last node of a Singly Linked List

#include <iostream>
using namespace std;

struct node{
      int data;
      node* next;
      node(int x){
         data = x;
         next = NULL;
      }
};

void del_last( node* &head){
     if(head == NULL || head->next == NULL){
      cout <<"An empty list or only one node";
      return;
     }

    node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;

     }


void insert_at_end(node* &head,int new_d){

    node* new_node = new node(new_d);
    if(head == NULL){
      head = new_node;

   }


  else{
     node* last = head;
  while (last->next != NULL) {
    last = last->next;
  }
  last->next = new_node;
  }
}

void traverselist(node* node) {
  while (node != NULL) {
    cout << node->data << " ";
    node = node->next;
  }
}


int main() {
  node* head = NULL;

  for (int i = 1; i <= 5; i++) {
    node* newnode = new node(i);
    newnode->next = head;
    head = newnode;
  }
  cout << "Original list: ";
  traverselist(head);
  del_last(head);


  cout << "\nNew list after deleting last node: ";
  traverselist(head);

  return 0;
}
