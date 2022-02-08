#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node* next;
};
struct Node* head;
struct Node* head1;


void Insert(int data){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=data;
    temp->next=head;
    head=temp;
    //Print();
}

void Insert1(int data){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=data;
    temp->next=head1;
    head1=temp;
    //Print();
}

struct Node* ReverseRecur(struct Node* head){
    if(head->next==NULL){
        return head;
    }
    struct Node* temp=ReverseRecur(head->next);
    head->next->next=head;
    head->next=NULL;
    return temp;
}

struct Node* merged=NULL;

void InsertLast(int data){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=data;
    if(merged==NULL){
        temp->next=merged;
        merged=temp;
        return;
    }
    struct Node* t=merged;
    while(t->next!=NULL){
        t=t->next;
    }
    t->next=temp;
    temp->next=NULL;
    
}

// struct Node* Merge(struct Node* head1,struct Node* head2){
//     if(head1==NULL){

//         return head2;
//     }
//     if(head2==NULL){
//         return head1;
//     }
//     if(head2->data>head1->data){
//         head1->next=Merge(head1->next,head2);
//         return head1;
        
        
//     }
//     else{
//         head2->next=Merge(head1,head2->next);
//         return head2;
         
       
       
//     }
// }

void Merge(struct Node* head1,struct Node* head2){
    if(head1->next==NULL){
        head1->next=head2;
        return;
    }
   
    if(head1->next->data < head2->data){
        head1=head1->next;
        Merge(head1,head2);
        
    }
    else{
        struct Node* temp=head1->next;
        head1->next=head2;
        head1=temp;
        Merge(head2,head1);
    }
}

void Print(struct Node* head){
    if(head==NULL){
        return;
    }
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    head=NULL;
    Insert(14);
    Insert(11);
    Insert(9);
    Insert(6);
    Insert(4);
    Insert(1);
    head1=NULL;
   
    Insert1(15);
    Insert1(13);
    Insert1(12);
    Insert1(7);
    Insert1(3);
    Insert1(2);
    Insert1(0);
    Print(head);
    Print(head1);
    //head=ReverseRecur(head);
    Merge(head1,head);
    Print(head1);

    return 0;
}