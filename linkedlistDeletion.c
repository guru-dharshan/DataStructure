#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void insert(int x,int p){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    if(p==1){
        if(head==NULL){
        head=temp;
        temp->next=NULL;
    }
    else{
        temp->next=head;
        head=temp;
    }
    }
    else{
  struct Node* temp1 = head;
    for(int i=0;i<p-2;i++){
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
    }
  
    
    
}

void delete(int p){
    struct Node* temp = head;
    if(p==1){
        head=head->next;
        free(temp);
    }
    else{
        for(int i=0;i<p-2;i++){
            temp=temp->next;
        }
        struct Node* temp1 =temp->next;
        temp->next=temp1->next;
        free(temp1);
    }
}

void printlist(){
     struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
     temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    head=(struct Node*)malloc(sizeof(struct Node));
    head=NULL;
    int n,x;
    
        insert(1,1);
        insert(2,2);
        insert(3,3);
        insert(4,4);
        insert(5,5);
       printlist();
       delete(2);
       printlist();




}
