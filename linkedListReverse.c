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

void printlist(){
     struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
     temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reverse(){
    struct Node* temp = head;
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    while(temp!=NULL){
        temp1=temp->next;
        if(temp==head){
            temp->next=NULL;
             temp=temp1->next;
        }
        else{
        temp1->next=temp;
        }
       
        
      
      
       
      
    }
    head=temp1;

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
       reverse();
       printlist();
}
