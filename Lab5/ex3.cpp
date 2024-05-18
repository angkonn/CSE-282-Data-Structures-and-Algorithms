// write a C++ program to find the Preorder recursion stack of the following tree.

//  __6__
// 8__   9
//    4


#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;

    node(int x){
    data = x;
    left = right = NULL;
    }
};

void preOrderstack(node* root){
   stack<node*>stack_list;
   stack_list.push(root);

   while(!stack_list.empty()){
      node* temp = stack_list.top();
      stack_list.pop();

      if(temp->right != NULL){
         stack_list.push(temp->right);
      }
      if(temp->left != NULL){
         stack_list.push(temp->left);
      }
      cout <<temp -> data <<" ";
   }
}

int main(){
   node* root = new node(6);
   root -> left = new node(8);
   root -> right = new node(9);
   root -> left -> right = new node(4);

   preOrderstack(root);
}
