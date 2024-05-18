// write a C++ program to find the Inorder, Preorder, and Postorder traversals of the following trees.

//       ____50____
//    _17_        _72_
// _12_   23_   54_   76
//9    14    19    67


#include<bits/stdc++.h>
using namespace std;

struct node{
   int data;
   node *left;
   node *right;
   node(int x){
      data = x;
      left = NULL;
      right = NULL;
   }
};

void inorder(node *temp){
   if( temp == NULL){
      return;
   }

   inorder(temp -> left);
   cout << temp -> data <<" ";
   inorder(temp -> right);
   }

void preorder(node *temp){
   if( temp == NULL){
      return;
   }
   cout << temp -> data <<" ";
   preorder(temp -> left);
   preorder(temp -> right);
   }

void postorder(node *temp){
   if( temp == NULL){
      return;
   }

   postorder(temp -> left);
   postorder(temp -> right);
   cout << temp -> data <<" ";
   }
int main(){
   node* root = new node(50);
   root -> left = new node(17);
   root -> right = new node(72);
   root -> left -> left = new node(12);
   root -> left -> right = new node(23);
   root -> right -> left = new node(54);
   root -> right -> right = new node(76);
   root -> left -> left-> left = new node(9);
   root -> left -> left-> right = new node(14);
   root -> left -> right -> right = new node(19);
   root -> right -> left-> right = new node(67);

   cout <<"In order traversal : "<<endl;
   inorder(root);
   cout <<"\npre order traversal : "<<endl;
   preorder(root);
   cout <<"\npost order traversal : "<<endl;
   postorder(root);

}
