#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;

};

struct Node* head;

void insertAtN(int data,int p){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    if(p==1){

    
    if(head==NULL){
        temp->next=NULL;
        temp->prev=NULL;
        head=temp;
        return;
    }
    head->prev=temp;
    temp->next=head;
    head=temp;
    }
    else{
        struct Node* ch;
        struct Node* chn;
        ch=head;
        for(int i=1;i<p-1;i++){
            ch=ch->next;
        }
        chn=ch->next;
        temp->prev=ch;
        temp->next=ch->next;
        ch->next=temp;
        if(chn!=NULL){
             chn->prev=temp; 
        }
      
        
    }
}

void print(){
    struct Node* t =head;
    while(t!=NULL){
        printf("%d",t->data);
        t=t->next;
    }
}

void printReverse(){
    struct Node* t=head;
    while(t->next!=NULL){
        t=t->next;
    }
    while(t!=NULL){
        printf("%d",t->data);
        t=t->prev;
    }
    
}
int main(){
    head = (struct Node*)malloc(sizeof(struct Node));
    head=NULL;
    insertAtN(1,1);
    insertAtN(2,2);
    insertAtN(3,3);
    printReverse();

}

