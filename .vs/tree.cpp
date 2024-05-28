#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
};
Node *root= NULL;
Node *Makenode( int new_data){
    Node *n= new Node();
    n->data= new_data;
    n->left=NULL;
    n-> right=NULL;
    return n;

}
void NLR(Node *root){
    if(root!= NULL){
        cout<<root->data<<" ";
        NLR(root->left);
        NLR(root->right);
    }
}
void NRL(Node *root){
    if(root!= NULL){
        cout<<root->data<<" ";
        NRL(root->right);
        NRL(root->left);
        
    }
}
void RNL(Node *root){
    if(root!= NULL){
        RNL(root->right);
        cout<<root->data<<" ";
        
        RNL(root->left);
        
    }
}
int main(){
    root= Makenode(1);
    Node *node2= Makenode(2);
    Node *node3= Makenode(3);
    Node *node4= Makenode(4);
    Node *node5= Makenode(5);
    Node *node6= Makenode(6);
    Node *node7= Makenode(7);
   root-> left= node2;
   root-> right= node3;
   node2->left=node4;
   node2-> right= node5;
    node5->left=node6;
    node5->right=node7;
    NLR(root);
    cout<<endl;
    RNL(root);
    cout<<endl;
    NRL(root);

}