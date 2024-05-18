// Write a C++ program to delete the first node of a Singly Linked List

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

void del_first( node* &head){
     if(head == NULL){
      cout <<"An empty list";
      return;
     }

    node* temp = head;
    head = head->next;
    delete temp;

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
  del_first(head);


  cout << "\nNew list after deleting first node: ";
  traverselist(head);

  return 0;
}
