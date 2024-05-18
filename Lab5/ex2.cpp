// write a C++ program to find the Inorder, Preorder, and Postorder traversals of the following trees.

//         ____1___
//     ___3___
//    5_      _2_
//      4_   7_  8_
//        11   9   13_
//                    12

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
   node* root = new node(1);
   root -> left = new node(3);

   root -> left -> left = new node(5);
   root -> left -> right = new node(2);


   root -> left -> left-> right = new node(4);
   root -> left -> right -> left = new node(7);
   root -> left -> right -> right = new node(8);

   root -> left -> left-> right -> right = new node(11);
   root -> left -> right -> left -> right = new node(9);
   root -> left -> right -> right -> right = new node(13);

   root -> left -> right -> right -> right -> right = new node(12);

   cout <<"In order traversal : "<<endl;
   inorder(root);
   cout <<"\npre order traversal : "<<endl;
   preorder(root);
   cout <<"\npost order traversal : "<<endl;
   postorder(root);

}
