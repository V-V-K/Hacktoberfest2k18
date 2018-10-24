#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
        /* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/


    void postOrder(Node *root) {

        if(root==NULL)
            return;
        if(root->left==NULL&&root->right==NULL)
        {
            cout<<root->data<<" ";
            return ;
            
        }
        
        postOrder(root->left);
    
        postOrder(root->right);
        cout<<root->data<<" ";
        return;
    }
    /* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/


    void postOrder(Node *root) {

        if(root==NULL)
            return;
        if(root->left==NULL&&root->right==NULL)
        {
            cout<<root->data<<" ";
            return ;
            
        }
        
        postOrder(root->left);
    
        postOrder(root->right);
        cout<<root->data<<" ";
        return;
    }
