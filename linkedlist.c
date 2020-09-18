#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *next;
	int data;
}node;
void display(struct node *);
struct node *HEAD=NULL, *temp=NULL, *p;
int main()
{
	int i=0,n=1;
	for(i=0;i<n;i++)
	{
		temp=(node*)malloc(sizeof(node));
		printf("\nEnter node:  ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(HEAD==NULL)
		{
			HEAD=temp;
		}
	    else
	    {
	    	p=HEAD;
	    	while(p->next!=NULL)
	    	p=p->next;
	    	p->next=temp;
		}
	}
	display(HEAD);
}
void display(struct node *HEAD)
{
	p=HEAD;
	while(p!=NULL)
	{
		printf("%d -> ",p->data);
		p=p->next;
    } printf("NULL");
}
