#include<stdio.h>

void chline(char,int,int);

int main(void) {
    char c;
    int a,b;

    if(scanf(" %c %d %d",&c,&a,&b)!=0) {
        chline(c,a,b);
    }else printf("Unavaliable enter");


    return 0;
}

void chline(char ch,int i,int j) {
    int i_orgin = i;

    while (j > 0) {
        i = i_orgin;

        while (i > 0) {
            printf("%c",ch);
            i--;
        }
        printf("\n");
        j--;
    }

}
