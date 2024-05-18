// Write a C++ program to find the sum of the left child of a given tree.
// [Hint: use level order traversal]

//          _50_         //
//    _17_        _72_   //
// _12_   23_   54_   76//
//9    14    19    67     //

#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
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

int left_sum(node* root){
   if (root == NULL){
      return 0;
   }


   queue<node*>list;
   vector<node*>left_list;

   list.push(root);

   while (!list.empty())
   {
     node* temp = list.front();
     list.pop();

     if(temp->left != NULL){
      list.push(temp->left);
      left_list.push_back(temp->left);
     }
    if(temp->right != NULL){
      list.push(temp->right);
     }
   }

   int sum = 0;
   for ( int i = 0 ; i  < left_list.size() ;  i++){
      sum += left_list[i]->data;
   }
   return sum;
}

int main(){
    //          _50_         //
   //    _17_        _72_   //
   // _12_   23_   54_   76//
   //9    14    19    67     //

   node* root = new node(50);
   root->left = new node(17);
   root->right = new node(72);
   root->left->left = new node(12);
   root->left->right = new node(23);
   root->left->left->left = new node(9);
   root->left->left->right = new node(14);
   root->left->right->right = new node(19);
   root->right->left = new node(54);
   root->right->right = new node(76);
   root->right->left->right = new node(67);

  cout<<"sum of left child: "<<left_sum(root)<<endl;



  }
