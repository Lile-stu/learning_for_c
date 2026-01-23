#include<stdio.h>

int main(void)
{
	float height;
	char name[40];
	
	printf("Enter your height cm:");
	
	scanf("%f",&height);
	
	printf("And,Enter your name:");
	
	scanf("%s",name);
	
	printf("%s, you are %0.3f cm tall",name,height);
	
	return 0;
}
