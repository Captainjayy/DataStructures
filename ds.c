#include<stdio.h>
#include<stdlib.h>
void display(int a[],int n);
int main()
{
		int a[20],n,i,l,t;
		printf("How many element you want to add (1 to 20): ");
		scanf("%d",&n);
		printf("Enter %d element : ",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("\nEnterted array is \n");
		display(a,n);
		l=n-1;
		for(i = 0; i < l; i++)
		{
			t=a[i];
			a[i]=a[l];
			a[l--]=t;
		}
		printf("\nAfter reverse is  \n");
		display(a,n);
		return 0;
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}
