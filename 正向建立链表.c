#include<stdio.h>
#include<malloc.h>
#include<math.h>
typedef struct node{
 int data;
 struct node *next;
}node,* LinkList;
LinkList list;
void init()
{
 LinkList p,q;
 q=(LinkList)malloc(sizeof(node));
 list=q;
 scanf("%d",&(q->data));
 q->next=NULL;
 while(q->data>=0)
 {
  p=(LinkList)malloc(sizeof(node));
  scanf("%d",&(p->data));
  p->next=NULL;
  q->next=p;
  q=p;
 }
 p=list;
 while(p->data>=0)
 {
  printf("--%d",p->data);
  p=p->next;
 }
 printf("\n");
}
int main()
{
 init();    
 LinkList p=list;
}

