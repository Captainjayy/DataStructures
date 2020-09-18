#include<stdio.h>
#include<stdlib.h>
int menu();
int main()
{
	int ch,r,c,z,nz,a[10][10],i,j;
	do
	{
		system("cls");
		ch=menu();
		switch(ch)
		{
			case 1 :	printf("\nEnter number of rows : ");
						scanf("%d",&r);
						printf("\nEnter number of columns : ");
						scanf("%d",&c);
						for(i = 1; i <= r; i++)
						{
							for(j = 1; j <= c; j++)
							{
								scanf("%d",&a[i][j]);
								if( a[i][j] == 0)
								{
									z++;
								}
								else
								{
									nz++;
								}
							}
						} 	
						if(z > nz)
						{
							printf("\nEnterted matrix is sparse matrix.\n");
						}
						else
						{
							printf("\nEnterted matrix is not sparse matrix.\n");
						}
						break;
			case 2 :	exit(-1);
			default : 	printf("\nEnter correct choise (1 to 3)\n");
		}
		system("pause");
	}while(1);
	return 0;
}
int menu()
{
	int ch;
	fflush(stdin);
	printf("1)Enter new matrix\n");
	printf("2)Exit : ");
	scanf("%d",&ch);
	return ch;
}
