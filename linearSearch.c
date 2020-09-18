#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	int arr[]={1,2,3,4,45,90};
	printf("enter a no:\n");
	scanf("%d",&n);
	for(i=0;i<=5;i++)
	{	
		if(n==arr[i])
		printf("match found at %d",i+1);
		
	}
return 0;
}
