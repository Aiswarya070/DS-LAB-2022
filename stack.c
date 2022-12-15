#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node *next;
}
struct node *top;
void main()
{
int opt;
do
{
printf("enter your option\n 1.push \n 2.pop \n 3.display \n 4.exit \n");
scanf("%d",&opt);
switch(opt)
{
case 1:
push();
display();
break;
case 2:
pop();
display();
break;
case 3;
display();
break;
case 4:
exit(0);
}
}
while(opt!=4);
}
void push()
{
struct node *new;
new=(struct node *)malloc(sizeof(struct node *));
if(new==NULL)
{
printf("stack overflow");
}
else
{
printf("enter the data to be pushed");
scanf("%d",&new->data);
new->next=NULL;
top=new;
}
void pop()
{
if(top==NULL)
{
printf("stack underlow")
}
else
{
printf("the item to be poped %d",top->data);
top=top->next;
}
}
void display()
{
while(top!=NULL)
{

