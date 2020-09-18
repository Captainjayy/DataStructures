#include <stdio.h> 
#define NUM 5
#define SQR(X) (X) * (X)  
#define SWAP(A, B) 

           	
          
int main(void) 
{ 
    int r,a=125,b=10,c=20;  
    r=a/(SQR(NUM));
    printf("%d divide by SQR(%d) is : %d \n",a,NUM,r);
    printf("\Before Swap\n");
	printf("B = %d and c = %d",b,c);
	SWAP(b,c);
	printf("\nAfter Swap\n");
	printf("B = %d and c = %d",b,c);
    return 0; 
} 
