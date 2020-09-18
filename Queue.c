#include<stdio.h>
#include<stdlib.h>
int minimum(int a[],int n);
int maximum(int a[],int n);
void display(int a[],int n);
int main()
{
		int a[20],n,i,min,max;
		printf("How many element you want to add (1 to 20): ");
		scanf("%d",&n);
		printf("Enter %d element : ",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("\nEnterted array is \n");
		display(a,n);
		min=minimum(a,n);
		max=maximum(a,n);
		printf("\nminimum of this is : %d",min);
		printf("\nmaximum of this is : %d",max);
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
int minimum(int a[],int n)
{
	int min,i;
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i] < min)
		{
			min=a[i];
		}
	}
	return min;
}
int maximum(int a[],int n)
{
	int max,i;
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i] > max)
		{
			max=a[i];
		}
	}
	return max;
}
