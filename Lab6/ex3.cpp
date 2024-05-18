 //. Write a C++ program to check whether a given tree is BST.

  //          _50_         //
   //    _17_        _72_   //
   // _12_   23_   54_   76//
   //9    14    19    67     //


#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

int isBST(node *root)
{
    node *prev = nullptr;
    if (root != nullptr)
    {
        if (!isBST(root->left))
        {

            return 0;
        }
        if (prev != NULL && root-> data <= prev-> data)
        {
            return 0;
        }
        prev = root ;
        return isBST(root -> right);

    }
    else{
        return 1;
    }

}
int main()
{
 node *root = new node(50);
    root->left = new node(17);
    root->right = new node(72);
    root->left->left = new node(12);
    root->left->right = new node(23);
    root->right->left = new node(54);
    root->right->right = new node(76);
    root->left->left->left = new node(9);
    root->left->left->right = new node(14);
    root->left->right->right = new node(19);
    root->right->left->right = new node(67);
    int b = isBST(root);
    if (b == 1)
    {
        cout<<"Tree is BST"<<endl;
    }
    else
    {
        cout<<"Tree is not BST"<<endl;
    }

}
