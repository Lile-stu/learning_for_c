#include<stdio.h>

int main(void)
{
	float tall_inch;
	float inch_to_cm = 2.54;
	float tall_cm;
	
	printf("Enter tall(inch):");
	
	scanf("%e",&tall_inch);
	
	tall_cm = tall_inch * inch_to_cm;
	
	printf("Your height is %e cm",tall_cm);
	
	return 0;	
} 
