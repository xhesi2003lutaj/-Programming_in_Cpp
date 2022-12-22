#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
struct node {
char str[20];
struct node* next;
};typedef struct node Node;

Node* insertBegin(Node *head, char str[]){

  Node *newnode=malloc(sizeof(Node));
   if(newnode==NULL){
    printf("error alllocating");
    exit(1);
   }{

   strcpy(newnode->str,str);
   if(head==NULL){
   // newnode->next=NULL;
    head=newnode;
    return head;
   }
   if(head!=NULL){
    newnode->next=head;
    head=newnode;
    return head;
   }
   }
}
void printList(Node *head){
  Node*pq=head;
  while(pq!=NULL){
    printf("%s ",pq->str);
    pq=pq->next;
  }
}
  Node *printback(Node *head){
    if(head==NULL){
	  printf("nothing to reverse");
	  exit(1);
	 }
	 {
		  Node *previous=NULL;
		  Node *current=head;
		  Node *nextt;
		  while(current!=NULL){
		  nextt=current->next;
		  current->next=previous;
		  previous=current;
		  current=nextt;
		  }
		  head=previous;
		  return head;
	  }
  }
Node *addend(Node *head, char data[]){
  Node *newnode=malloc(sizeof(Node));
  Node *tail=head;
  if(newnode==NULL){
    printf("ellor allocating memory");
    exit(1);
  }
  strcpy(newnode->str,data);
  newnode->next=NULL;
  if(head==NULL){
    insertBegin(head,data);
  }
  else{
    while (tail->next!=NULL)
    {
      tail=tail->next;
      
    }
    tail->next=newnode;
       return head;
  }
 
}
Node *removend(Node *head){
   Node *cursor =head;
   Node *tail;
   while (cursor->next!=NULL)
   {
      
      tail=cursor;
      cursor=cursor->next;

   }
  
   tail->next=NULL;
   free(cursor);
 //  head=cursor;
   return head;
}
int main(){
  Node *data=NULL;
  char str[20];
  int n;
  
  while (1)
  {
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    fgets(str,sizeof(str),stdin);
     data=insertBegin(data,str);
      break;
    
    case 2:
    printList(data);
      break;
    case 3:
   data=printback(data);
      break;
      case 4:
    fgets(str,sizeof(str),stdin);
     data=addend(data,str);
      break;
     case 5:
     removend(data);
      break;
    }

  }
  return 0;
}
