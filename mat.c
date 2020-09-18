#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],d[10][10];
	int i,j,n1,m1,ch,n2,m2;
	printf("Enter the order of 1st matrix: ");
	scanf("%d %d",&m1,&n1);
	for(i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            a[i][j]=rand()%10;
        }
        printf("\n\n");
    }
    printf("Enter the order of 2nd matrix: ");
	scanf("%d %d",&m2,&n2);
	for(i = 0; i < m2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            b[i][j]=rand()%10;
        }
        printf("\n\n");
    }
    printf("\n Matrix A =\n");
    for(i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n\n");
    }
    printf("\nMatrix B =\n");
    for(i = 0; i < m2; i++)
    {
        for (j = 0; j <n2; j++)
        {
            printf("%3d",b[i][j]);
        }
        printf("\n\n");
    }
    printf("\n Choose one of the options\n");
    printf("\n1.Add both matrices");
	printf("\n2.Multiply two matrices");
	printf("\n3.Find transpose of both matrices");
	printf("\n4.Traverse matrtix\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nAddition of the matrices are\n");
				if(n1==m2)
				{
					for(i = 0; i < m1; i++)
				    {
				        for (j = 0; j < n2; j++)
				        {
				            c[i][j]=a[i][j]+b[i][j];
				            printf("%3d",c[i][j]);
				        }
				        printf("\n\n");
				    }
			    }
				else 
				printf("\nInvalid order");
				break;
		case 2: printf("\nMultiplication of 2 matrices");
				if(n1==m2)
				{
					for(i=0;i<m1;i++)
					{
						for(j=0;j<n2;j++)
						{
							d[i][j]=(a[i][j]*b[i][j])+(a[i][j]*b[i+1][j]);
							printf("%3d  ",d[i][j]);
						} 
						printf("\n\n");
 					}
				}
				break;				
	
	
	
	
	}
	
	
	
	
	
	
	
	return 0;
}
