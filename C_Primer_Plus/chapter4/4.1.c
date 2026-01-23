#include<stdio.h>

int main(void)
{
	char first_name[40],last_name[40];
	
	printf("Enter your name:");
	
	scanf("%s %s",first_name,last_name);
	
	printf("Your name is %s %s.",first_name,last_name);
	
	return 0;
}
