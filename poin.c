#include<stdio.h>
#include<conio.h>
int main()
{
	int *p,*q,*r,a,b,c;
	r=0;
	a=10;
	b=20;
	p=&a;
	q=&b;
	printf(" p=%d q=%d a=%d  b=%d",*p,*q,a,b);
    p=p+5;
	r= (p - q)   *  4;
	printf(" \n\n r ----> %d q=%d p=%d",r,q,p);
	return 0;    
}
