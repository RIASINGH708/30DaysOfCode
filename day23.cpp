#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node* root){
      //Write your code here
      queue<Node*> q;
      if(root==NULL) return;
      q.push(root);
      while(!q.empty()){
          if(q.front()->left!=NULL) q.push(q.front()->left);
          if(q.front()->right!=NULL) q.push(q.front()->right);
          cout<<q.front()->data<<" ";
          q.pop();
      }
    }
};//End of Solution
