#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int *p,sum=0,i=0,n=5;
	p=&a;
	for(i = 0; i < n; i++)
	{
		sum += *p;
		p++;	
	}
	printf("\nSum of array is : %d",sum);
	return 0;
}
