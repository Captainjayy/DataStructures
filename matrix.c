#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,r1,c1,r2,c2;
	scanf("%d",&r1);
	scanf("%d",&c1);
	scanf("%d",&r2);
	scanf("%d",&c2);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
		}
	}		printf("\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d      ",c[i][j]);
		}
		printf("\n");
	}
	getch();
}
