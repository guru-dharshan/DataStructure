#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void insert(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    if(head==NULL){
        head=temp;
        temp->next=NULL;
    }
    else{
        temp->next=head;
        head=temp;
    }
}

void printlist(){
     struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
     temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
}
int main()
{
    head=(struct Node*)malloc(sizeof(struct Node));
    head=NULL;
    int n,x;
    printf("how many numbers: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the number: ");
        scanf("%d",&x);
        insert(x);
        printlist();

    }
}
