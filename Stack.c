#include<stdio.h>
#include<stdlib.h>
int menu();
void insert(int a[]);
void del(int a[]);
int remdup(int a[]);
void display(int a[]);
int n;
int main()
{
	int a[20],i,ch;
	printf("How many element you want to add (1 to 20): ");
	scanf("%d",&n);
	printf("Enter %d element : ",n);
	for(i=0;i<n;i++)
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
			case 1 : 	display(a);
						insert(a);break;
			case 2 : 	display(a);
						del(a);break;
			case 3 : 	remdup(a);break;
			case 4 : 	display(a);break;
			case 5 :	exit(-1);break;
			default : printf("\nEnter correct choise (1 to 2)\n");
		}
		system("pause");
	}while(1);
	return 0;
}
void insert(int a[])
{
	int i,item,loc;
	if(n==20)
	{
		printf("\noverflow occur array is already full.");
		return ;
	}
	printf("\nenter element you want to insert : ");
	scanf("%d",&item);
	printf("enter location where you want to insert (0 to %d): ",n);
	scanf("%d",&loc);
	for(i=n;i>=loc;i--)
	{
		a[i+1]=a[i];	
	}	
	a[++i]=item;
	n++;
	printf("\nINsert successfully\n");
}
void del(int a[])
{
	int i,loc;
	if(n==0)
	{
		printf("\nunderflow occur array is empty.");
		return ;
	}
	printf("enter location where you want to delete (0 to %d): ",n-1);
	scanf("%d",&loc);
	for(i=loc;i<n;i++)
	{
		a[i]=a[i+1];	
	}	
	n--;
	printf("\ndelete successfully\n");
}
int remdup(int a[])
{
	int b[20],al=0,i,j,flag;
	if(n==0)
	{
		printf("underflow array is empty.");
		return;
	}
	b[al]=a[0];
	al++;
	for(i=1;i<n;i++)
	{
		flag=0;
		for(j=0;j<al;j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			b[al]=a[i];
			al++;
		}
	}
	printf("\nduplicate element are removed.\n");
	n=al;
	for(i = 0; i < al; i++)
	{
		a[i]=b[i];
	}
	display(a);
}

void display(int a[])
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
}
int menu()
{
	int ch;
	printf("1)For insert an element in array \n");
	printf("2)for delete an element from array\n");
	printf("3)for remove duplicate element from array\n");
	printf("4)Display array\n");
	printf("5)Exit : ");
	scanf("%d",&ch);
	return ch;
}
