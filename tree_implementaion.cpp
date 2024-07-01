#include<iostream>
#include <queue>
using namespace std;
class node {
    
    public:
    int data;
    node * left;
    node * right;
    // ,constructor 
     node(int val ): data(val),left(nullptr),right(nullptr){}

};
void preorder(node * root){

    if(root){
        cout << root->data;
        preorder(root->left);
        preorder(root->right);
    }

}
int main(){
    
    queue<node*> q;
    int value ;
    cout << "Enter root value";
    cin >> value;
    if (value == -1 ){
        cout << "Tree root cant be -1 ";
        return 1;
    }
    node   *root = new node(value);
    q.push(root);


    while(!q.empty()){

        node * current =  q.front();
        q.pop();
        // input left child 
        cout <<"Enter the value for leftchild" << current->data <<"  -1 to skip ";
        cin >> value;
        if(value !=-1 ){
            node * leftchild = new node(value);
            current->left = leftchild;
            q.push(leftchild);
        }
        else{

        }

        // INput for right chile
        cout <<"Enter the value for rightchild" << current->data<<"-1 to skip ";
        cin >> value;
        if(value !=-1 ){
            node * rightchild = new node(value);
            current->right = rightchild;
            q.push(rightchild);
        }
    }

    //lets print the tree

    preorder(root);
    return 0;
}
