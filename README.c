# reve
#include <stdio.h>

int main(void) {
	int num,odd=0;
	printf("enter number:");
	scanf("%d",&num);
while(num!=0)
	{
	   int sum=num;
	    sum=sum%10;
	    odd=odd*10+sum;
	     num=num/10;
	

	}	printf("\nodd sum is :%d",odd);
	return 0;
}

