#include<iostream>
using namespace std;

int height(Node * root){
    // base condition 
    if(root == nullptr)return 0;

    int left = height(root->left);
    int right = height(root->right);
    return 1+ max(left,right);

}
int main(){
  
  
  return 0 ;  
}