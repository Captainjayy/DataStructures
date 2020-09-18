#include<stdio.h>
#include<stdlib.h>
int menu();
void push(int a[]);
void pop(int a[]);
int peek(int a[]);
void display(int a[]);
int tos=0;
int main()
{
	int a[20],i,ch;
	printf("How many element you want to add (1 to 20): ");
	scanf("%d",&tos);
	printf("Enter %d element : ",tos);
	for(i=0;i<tos;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnterted array is \n");
	display(a);
	system("pause");
	do
	{
		system("cls");
		ch=menu();
		switch(ch)
		{
			case 1 : 	push(a);break;
			case 2 : 	pop(a);break;
			case 3 : 	peek(a);break;
			case 4 : 	display(a);break;
			case 5 :	exit(-1);break;
			default : printf("\nEnter correct choise (1 to 2)\n");
		}
		system("pause");
	}while(1);
	return 0;
}
void push(int a[])
{
	int i,item,loc;
	if(tos==20)
	{
		printf("\noverflow occur array is already full.");
		return ;
	}
	printf("\nenter element you want to insert : ");
	scanf("%d",&item);
	a[tos++]=item;
	printf("\nINsert successfully\n");
}
void pop(int a[])
{
	int i,loc;
	if(tos==0)
	{
		printf("\nunderflow occur array is empty.");
		return ;
	}
	tos--;
	printf("\ndelete successfully\n");
}
int peek(int a[])
{
	int b[20],al=0,i,j,flag;
	if(tos==0)
	{
		printf("underflow array is empty.");
		return;
	}
	printf("peek of the stack element is : %d\n",a[tos-1]);
}

void display(int a[])
{
	int i;
	if(tos==0)
	{
		printf("underflow array is empty.");
		return;
	}
	for(i=0;i<tos;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
}
int menu()
{
	int ch;
	printf("1)For push operation \n");
	printf("2)for pop operation\n");
	printf("3)for peek \n");
	printf("4)Display stack\n");
	printf("5)Exit : ");
	scanf("%d",&ch);
	return ch;
}
