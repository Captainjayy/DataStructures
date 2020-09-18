#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char c;
	int size,b;
	fp=fopen("abc.txt","r");
	if(fp == NULL)
	{
		printf("exit");
		exit(-1);
	}
	fseek(fp,-1,2);
	size=ftell(fp);
	b=size-4;
	fseek(fp,-b,SEEK_CUR);
	while( size > b )
	{
		c=fgetc(fp);
		if ( c == EOF )
		{
			break;
		}
		printf("%c",c);
		size--;
	}	
	fclose(fp);
	return 0;
}
