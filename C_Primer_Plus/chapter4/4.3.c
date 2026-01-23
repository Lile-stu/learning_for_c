#include<stdio.h>

int main(void)
{
	float num;
	
	scanf("%f",&num);
	
	printf("The input is %2.1f or %2.1e",num,num);
	
	printf("The input is %+2.3f or %2.3E",num,num);
	
	return 0;
} 
