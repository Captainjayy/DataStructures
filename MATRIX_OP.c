#include<stdio.h>
void display(int a[3][3],int r,int c);
void displayfloat(float a[3][3],int r,int c);
int determinet(int a[3][3],int r,int c);
void cofactor(int a[3][3],int t[3][3],int r,int c);
void transpose(int a[3][3],int r,int c);
int cofac(int a[3][3]);
void inverseprint(int a[3][3],int det,int r,int c);
void inversereal(int a[3][3],float in[3][3],int det,int r,int c);
int tsum=0;
int main()
{
	int a[3][3]={{1,3,4},{2,1,3},{0,-1,2}};
	int r,c,cofact[3][3];
	float inver[3][3];
	r=c=3;
	display(a,r,c);	
	tsum=determinet(a,r,c);
	printf("\n\nDeterminet is : %d\n",tsum);
	cofactor(a,cofact,r,c);
	display(cofact,r,c);
	transpose(cofact,3,3);
	printf("\nafter tanspose cofactor matrix is  \n");
	display(cofact,r,c);
	inverseprint(cofact,tsum,r,c);
	inversereal(cofact,inver,tsum,r,c);
	printf("\nafter real inverse is  \n");
	displayfloat(inver,r,c);
	return 0;
}

void display(int a[3][3],int r,int c)
{
	int i,j;
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%2d\t",a[i][j]);
		}	
		printf("\n");
	}
}

void displayfloat(float a[3][3],int r,int c)
{
	int i,j;
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%5.2f\t",a[i][j]);
		}	
		printf("\n");
	}
}

int determinet(int a[3][3],int r,int c)
{
	int det;
	if( r == 2)
	{
		det=((a[0][0] * a[1][1]) - (a[0][1] * a[1][0])); 
		return det;
	}
	else
	{
		int t[3][3],m,n,i,j,l,k,sum[4],val=0;
		for(i = 0; i < 1; i++)
    	{
	        for(j = 0; j < 3; j++)
	        {
	            m = 0;
	            for(k = i+1; k < 3; k++)
	            {
	                n=0;
	                for(l = 0; l < 3; l++)
	                {
	                    if(l == j)
	                    {
	                        continue;
	                    }
	                    t[m][n] = a[k][l];
	                    n++;
	                }
	                m++;
	            }
	             sum[j]=determinet(t,2,2);
	             if((i+j)%2==0)
	             {
	             	tsum+= a[i][j] * sum[j];
	             }
	             else
	             {
	             	tsum+= -a[i][j] * sum[j];
	             }
	        }
    	}
    	
    	return tsum;
	}
}

void cofactor(int a[3][3],int t[3][3],int r,int c)
{
	int m,n,i,j,l,k,sum[4],temp[3][3],val=0,flag=0;
	for(i = 0; i < 3; i++)
	{
        for(j = 0; j < 3; j++)
        {
            m = 0;
            for(k = 0; k < 3; k++)
            {
				flag=0;
				n=0;
                for(l = 0; l < 3; l++)
                {
					if( (l == j) || (k == i) )
                    {
                        continue;
                    }
                    flag=1;
                    temp[m][n] = a[k][l];
                    n++;
                }
                if(flag==1)
                {
                	m++;
				}
            }
            //display(temp,2,2);
             if((i+j)%2==0)
             {
             	t[i][j] = cofac(temp);
             }
             else
             {
             	t[i][j]= -cofac(temp);
             }
             //printf("\ncofactor of : %d\t",t[i][j]);
        }
	}
}

int cofac(int a[3][3])
{
	
	int cof;
	cof=((a[0][0] * a[1][1]) - (a[0][1] * a[1][0])); 
	return cof;
}

void transpose(int a[3][3],int r,int c)
{
	
	int i,j,temp;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if( i < j)
			{
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
			}
		}
	}
}

void inverseprint(int a[3][3],int det,int r,int c)
{
	int i,j;
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%2d\\%d\t",a[i][j],det);
		}	
		printf("\n");
	}
}

void inversereal(int a[3][3],float in[3][3],int det,int r,int c)
{
	int i,j;
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			in[i][j]=(float)a[i][j] / det;
			
		}	
		printf("\n");
	}
}

