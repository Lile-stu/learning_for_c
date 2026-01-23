#include<stdio.h>

int main(void)
{
	int quart;
	long double water = 3.0E23;
	
	printf("Enter the number of quarts of the water:");
	
	scanf("%d",&quart);
	
	printf("Here are %lld number of water molecules",quart/water);
	
	return 0;
}

