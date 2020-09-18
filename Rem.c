#include<stdio.h>
#include<math.h>
int main()
{
	int rem,n,bin;
	int p;
	p=bin=0;
	n=37;
	while(n > 0)
	{
		rem = n % 2;
		n = n / 2 ;
		bin=bin+rem*pow(10,p);
		p++;
	}
	printf("%d",bin);
	return 0;
}
