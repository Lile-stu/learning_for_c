#include <stdio.h>

int main(){
    const int s = 60;
    int min;
    double hours;
    
    printf("Enter the minutes for translate:");

    scanf("%d",&min);

    while(min > 0){
        hours = min / s;
        printf("It's %2.21f hours or %d minutes.",hours,min);
        printf("\nEnter the minutes for translate:");
        scanf("%d",&min);
    }

    return 0;
}