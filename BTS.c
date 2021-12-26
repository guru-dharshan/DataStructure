/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <stdbool.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* root;
struct Node* insert(struct Node* root,int data){
    if(root==NULL){
        root= (struct Node*)malloc(sizeof(struct Node));
        root->data=data;
        root->right=NULL;
        root->left=NULL;
       
    }
    else if(data<=root->data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
    return root;
}

bool search(struct Node* root,int data){
    if(root ==NULL){
        return false;
    }
    else if(root->data==data){
        
        return true;
    }
    else if(data>root->data){
        return search(root->right,data);
    }
    else{
        return search(root->left,data);
    }
}
int main()
{
    
    root =NULL;
    root=insert(root,12);
    root=insert(root,17);
    root=insert(root,10);
    bool a=search(root,10);
    if(a){
        printf("yes");
    }
    else{
        printf("no");
    }
    
    

    return 0;
}
