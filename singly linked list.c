#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node* next;
}*head=NULL;

struct node* temp;

void binsert()
{
 int data;
printf("Enter the value to insert : ");
  scanf("%d",data);
  struct node *ptr;
  ptr=(struct node*)malloc(sizeof(struct node));
  ptr->data=data;
  ptr->next=head;
  head=ptr;
  printf("Node is inserted");
}
void linsert()
{
    int data;
    struct node * ptr,*temp;
  printf("Enter the value to insert : ");
  scanf("%d",data);
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    printf("Overflow");
    else
{
  temp=head;
  if(temp!=NULL)
  {
    temp=temp->next;
  }
  ptr->data=data;
  ptr->next=NULL;
  temp->next=ptr;
}
}

void fdelete()
{
 if(head==NULL)
 {
  printf("List is empty ");
 }
 else{
  temp=head;
  head=temp->next;
  free(temp);
  printf(" Node is deleted : %d ",temp->data);
  }
}

void ldelete()
{
struct node *temp1,*temp2;
if(head=NULL)
{
printf("list is empty");
}

  temp1=head;
  while(temp1->next!=NULL)
  {
  temp2=temp1;
  temp1=temp1->next;
  }
  temp2->next=temp1->next;
  free(temp1);
  }

void display()
{
  struct node *temp;
  temp=head;
  if(temp==NULL)
  {
    printf(" Nothing to print");
  }
  else
  {
  while(temp!=NULL)
  {
    printf(" %d",temp->data);
    temp=temp->next;
  }
}}

int main()
{
   int ch=0;
  printf("Singly linked list");

  while(1)
  {
    printf("\n 1.binsert\n2.linsert\n3.fdelete\n4.ldelete\n5.display\n6.Exit\n");
      printf("\n Enter your choicce : ");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:
     binsert();
     break;

     case 2:
     linsert();
     break;

     case 3:
     fdelete();
     break;

     case 4:
     ldelete();
     break;

     case 5:
     display();
     break;

     case 6:
     exit(0);
     break;

    }
  }
}
