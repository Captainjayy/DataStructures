#include<stdio.h>
#include<stdlib.h>
int strLen(char *sptr);
void strCat(char *sptr1,char *sptr2);
int strCmp(char *sptr1,char *sptr2);
void strIsrt(char *sptr1,char *sptr2,char *sptr3,int sp);
void strRep(char *sptr1,char *sptr2,char *sptr3,int sp);
void strDel(char *sptr,char *sptr2,int sp);
void strSub(char *sptr1,char *sptr2);
void strUp(char *sptr1);
void strLow(char *sptr1);
void strTrim(char *sptr1);
void strRev(char *sptr1);
int search(char *sptr,char *word);
int menu();
int main()
{
	int ch,l,deff,sp;
	char str[80]="My                Name is                 Jeremy Titus.";
	char str2[80],str3[80];
	do
	{
		system("cls");
		ch=menu();
		switch(ch)
		{
			case 1 : 	l=strLen(str);
						printf("\nLength is : %d\n",l);
						break;
			case 2 : 	printf("\nEnter 2nd String : ");
						scanf("%s",str2);
						strCat(str,str2);
						printf("\nstring is : %s\n",str);
						break;
			case 3 : 	printf("\nEnter 2nd String : ");
						scanf("%s",str2);
						if(strCmp(str,str2) == 0)
						{
							printf("string is equal .\n");
						}
						else
						{
							printf("string is not equal .\n");
						}
						break;
			case 4 : 	printf("\nEnter String (which you want Insert): ");
						scanf("%s",str2);
						printf("\nEnter String (from after you want insert): ");
						scanf("%s",str3);
						sp=search(str,str3);
						if(sp==-1)
						{
							printf("\n%s is not found in given string try again\n",str3);	
						}
						else
						{
							strIsrt(str,str2,str3,sp);
						}
						printf("Insert Succesfully");
						printf("\nString is : %s\n",str);
						break;
			case 5 : 	printf("\nEnter String (which you want replace): ");
						scanf("%s",str2);
						printf("\nEnter String (with you want replace): ");
						scanf("%s",str3);
						sp=search(str,str2);
						if(sp==-1)
						{
							printf("\n%s is not found in given string try again\n",str2);	
						}
						else
						{
							strRep(str,str2,str3,sp);
						}
						printf("Repalce succesfully");
						printf("\nString is : %s\n",str);
						break;
			case 6 : 	printf("\nEnter String (which you want Delete): ");
						scanf("%s",str2);
						sp=search(str,str2);
						if(sp==-1)
						{
							printf("\n%s is not found in given string try again\n",str2);	
						}
						else
						{
							strDel(str,str2,sp);
						}
						printf("Delete succesfully");
						printf("\nString is : %s\n",str);
						break;
			case 7 : 	strUp(str);
						printf("\nString is : %s\n",str);
						break;
			case 8 : 	strLow(str);
						printf("\nString is : %s\n",str);
						break;
			case 9 : 	strTrim(str);
						printf("\nString is : %s\n",str);
						break;
			case 10 : 	strRev(str);
						printf("\nString is : %s\n",str);
						break;
			case 11 : 	printf("\nString is : %s\n",str);
						break;
			case 12 : exit(-1);
			default : printf("Enter between 1 to 12 ");
		}
		system("pause");
	}while(1);
	return 0;
}
int strLen(char *sptr)
{
	int i=0;
	while( *(sptr + i++) !='\0');
	return --i;
}

void strCat(char *sptr1,char *sptr2)
{
	int l=strLen(sptr1);
	while(*sptr2 != '\0')
	{
		*(sptr1 + l++)=*sptr2++;
	}
}

int strCmp(char *sptr1,char *sptr2)
{
	while(*sptr1 != '\0')
	{
		if(*sptr1 > *sptr2)
		{
			return (*sptr1 - *sptr2);
		}
		else if(*sptr1 < *sptr2)
		{
			return (*sptr1 - *sptr2);
		}
		*sptr1++;
		*sptr2++;
	}
	return 0;
}

void strIsrt(char *sptr1,char *sptr2,char *sptr3,int sp)
{
	int i,j=0,l,w1l,w2l,sft,ep,ssp;
	l = strLen(sptr1);
	w1l = strLen(sptr2);
	w2l = strLen(sptr3);
	ep=sp+w2l;
	sft=w1l;
	for(i=l;i>=ep;i--)
	{
		sptr1[i+sft]=sptr1[i];
	}
	sp=sp+w2l;
	ep=sp+w1l;
	for(i=sp;i<ep;i++)
	{
		sptr1[i]=sptr2[j++];
	}
}

void strRep(char *sptr1,char *sptr2,char *sptr3,int sp)
{
	int i,j=0,l,w1l,w2l,sft,ep,ssp;
	l = strLen(sptr1);
	w1l = strLen(sptr2);
	w2l = strLen(sptr3);
	ep=sp+w1l;
	if(w2l > w1l)
	{
		sft=w2l-w1l;
		for(i=l;i>=ep;i--)
		{
			sptr1[i+sft]=sptr1[i];
		}
		ep=sp+w2l;
		for(i=sp;i<ep;i++)
		{
			sptr1[i]=sptr3[j++];
		}
	}
	else
	{
		sft=w1l-w2l;
		ep=sp+w2l;
		for(i=ep;i<=l;i++)
		{
			sptr1[i]=sptr1[i+sft];
		}
		ep=sp+w2l;
		for(i=sp;i<ep;i++)
		{
			sptr1[i]=sptr3[j++];
		}
	}
}

void strDel(char *sptr1,char *sptr2,int sp)
{
	int i,l,wl,sft;
	l = strLen(sptr1);
	wl = strLen(sptr2);
	sft=wl;
	for(i=sp;i<=l;i++)
	{
		sptr1[i]=sptr1[i+sft];
	}
}

void strSub(char *sptr1,char *sptr2)
{
	
}

void strUp(char *sptr1)
{
	while( *(sptr1) !='\0')
	{
		if(*sptr1 >= 'a' && *sptr1 <= 'z' )
		{
			*sptr1-=32;
		}
		sptr1++;
	}
}

void strLow(char *sptr1)
{
	while( *(sptr1) !='\0')
	{
		if(*sptr1 >= 'A' && *sptr1 <= 'Z' )
		{
			*sptr1+=32;
		}
		sptr1++;
	}  
}

void strTrim(char *sptr1)
{
	int j,i=0,m=0,cp,flag=0,l;
	l=strLen(sptr1);
	char c;
	while( *(sptr1 + i) != 0 )
	{
		m=0;
		flag=0;
		if(*(sptr1 + i++)== ' ')
		{
			cp=i-1;
			while(*(sptr1 + i++)== ' ')
			{
				flag=1;
				m++;	
			}
		}
		if(flag == 1)
		{
			l=l-m+1;
			for(j=cp;j<=l;j++)
			{			
				sptr1[j]=sptr1[j+m];
			}
			i=cp+1;
		}
	}	
}
void strRev(char *sptr1)
{
	int i=0;
	int l=strLen(sptr1);
	char t;
	l--;
	while(i<l)
	{
		t=*(sptr1 + i);
	 	*(sptr1 + i)=*(sptr1 + l);
	 	*(sptr1 + l)=t;
	 	i++;
		l--;	
	}
}

int search(char *sptr,char *word)
{
	int i=0,j,l,wl,flag=0;
	wl=strLen(word);
	l=strLen(sptr);
//	printf("length is  wlength : %d %d" ,l,wl);
	l=l-wl+11;
//	printf("length is : %d",l);
	for(i=0;i<l;i++)
	{
		flag=0;
		for(j=0;j<wl;j++)
		{	
			if(*(sptr + (i+j)) != *(word + j))
			{	
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			return i;
		}
	}
	return -1;
}
int menu()
{
	int ch;
	fflush(stdin);
	printf("1)For find length \n");
	printf("2)For concatinate two string \n");
	printf("3)For compare two string \n");
	printf("4)For Insert new string \n");
	printf("5)For Replace word \n");
	printf("6)For Delete word\n");
	printf("7)For to Uppercase\n");
	printf("8)For to lowercase\n");
	printf("9)For trim\n");
	printf("10)For reverse string \n");
	printf("11)For display\n");
	printf("12)For Exit : ");
	scanf("%d",&ch);
	return ch;
}
