#include<stdio.h>
#include<stdlib.h>
void tower(int n,char s,char d,char a);
int main()
{
	int n;
	printf("how many disk you in tower : ");
	scanf("%d",&n);
	
	tower(n,'A','B','C');
	return 0;
}
void tower(int n,char s,char d,char a)
{
	if(n==1)
	{
		printf("\nDisk 1 mov from %c to %c ",s,d);
		return; 	
	}
	tower(n-1,s,a,d);
	printf("\ndisk %d mov from %c to %c",n,s,d);
	tower(n-1,a,d,s);
}
