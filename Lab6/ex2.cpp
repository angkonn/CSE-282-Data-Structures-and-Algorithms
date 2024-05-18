 // Write a C++ program to check whether the following tree is balanced.
   //          _50_         //
   //    _17_        _72_   //
   // _12_   23_   54_   76//
   //9    14    19    67     //


#include<iostream>
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

int max_depth(node* root){
   if (root == NULL) {
      return 0;
   } else {
      int lh =  max_depth(root->left);
      int rh =  max_depth(root->right);
      return 1+ max(lh, rh);
   }
}

bool is_balanced(node* root){
   if (root == NULL) {
      return true;
   }
   int lh = max_depth(root->left);
   int rh = max_depth(root->right);
   if (abs(lh - rh) <= 1 && is_balanced(root->left) && is_balanced(root->right)) {
      return true;
   }
   return false;
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

   if(is_balanced(root)){
      cout << "Balanced";
   } else {
      cout << "Not Balanced";
   }

   return 0;
}
