#include<stdio.h>
#define size 5
int front=-1,rear=-1;
int item[size],i;
void push();
void pop();
void display();
int main()
{
	int chc;
	do
	{
 	printf("\nMenu\n\t 1 to create the element : ");
	printf("\n\t 2 to delete the element : ");
	printf("\n\t 3 to display the queue : ");
	printf("\n\t 4 to exit from main : ");
	printf("\nEnter your choice : ");
	scanf("%d",&chc);
	switch(chc)
	{
		case 1:
	 		push();
			break;
	 	
	 	case 2:
	 		pop();
	 		break;
	 
		case 3:
	 		display();
	 		break;
	 
		case 4:
			return 1;
		default:
	 			printf("\nInvalid choice :");
	}
	}while(1);
	return 0;
}
void push()
{
	if(rear==size-1)
	printf("queue is full");
	else{
		if(front==-1)
		{
			front=0;
			printf("enter the item");
			scanf("%d",&item[rear]);
			rear=rear+1;
	    }
	}
}
void pop()
{
	if(front==-1||front>rear)
	{
		printf("queue is empty");
		return;
	}
	else
	{
		printf("element removed");
		front=front+1;
	}
}
void display()
{
	if(front==-1)
	printf("its empty");
	else
	{
		for(i=front;i<=rear;i++)
		{	
			printf("%d->",item[i]);
			printf("\n");
		}
	}
}
