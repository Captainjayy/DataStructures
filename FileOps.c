#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	
	FILE *fp;
	char c;
	int size;
	fp=fopen("abc.txt","r");
	if(fp == NULL)
	{
		printf("exit");
		exit(-1);
	}
	while(1)
	{
		c= toupper(fgetc(fp));
		if( c == EOF)
		{
			break;
		}
		printf("%c",c);
	}
	fclose(fp);
	return 0;
}
