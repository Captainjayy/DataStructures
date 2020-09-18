#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	int i,a[6];
	fp=fopen("test.txt","w");
	printf("Enter five numbers to be stored in the file");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		fprintf(fp,"%d ",a[i]);		
	}	
	fclose(fp);
	printf("Successfully stored!");
	return 0;
}
