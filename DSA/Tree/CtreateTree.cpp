#include<iostream>
#include<queue>
using namespace std;

struct node{
    int data;
    node*left; 
    node*right; 
};



node*createNode(int data){
    node*newNode= new node();
    if(!newNode){
        cout<<"Memory error\n";
        return NULL;
    }
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
}

node*insertNode(node*root,int data){

    if (root==NULL){
        root=createNode(data);
        return root;
    }

    queue<node*>q;
    q.push(root);

    while(!q.empty()){

        node*temp=q.front();
        q.pop();

        if(temp->left!=NULL){
            q.push(temp->left);
        }
        else{
            temp->left=createNode(data);
            return root;
        }
        if (temp->right != NULL)
            q.push(temp->right);
        else {
            temp->right = createNode(data);
            return root;

    }

    }
}

void inorder(node*temp){
    if (temp == NULL)
        return;
 
    inorder(temp->left);
    cout << temp->data << ' ';
    inorder(temp->right);
}

int main(){

    node*root=createNode(10);
    root->left = createNode(11);
    root->left->left = createNode(7);

    cout << "Inorder traversal before insertion: ";
    inorder(root);
    cout << endl;

     int key = 12;
    root = insertNode(root, key);
    cout << "Inorder traversal after insertion: ";
    inorder(root);
    cout << endl;

}