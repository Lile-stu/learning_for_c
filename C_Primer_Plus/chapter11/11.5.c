/*5.设计并测试一个函数，搜索第1个函数形参指定的字符串，在其中查
找第2个函数形参指定的字符首次出现的位置。如果成功，该函数返指向该
字符的指针，如果在字符串中未找到指定字符，则返回空指针（该函数的功
能与strchr()函数相同）。在一个完整的程序中测试该函数，使用一个循环
给函数提供输入值。*/

#include <stdio.h>

char * get_char(char * ,int );
char * pick_char(char *,char,int);

int main(void){
    int n;
    printf("请输入要获取的字符数：");
    scanf("%d",&n);
    while(getchar() != '\n') continue;
    char arr[n+1];

    if(get_char(arr,n)){
        arr[n] = '\0';
        printf("输入的内容是：%s",arr);
    }
    
    char word;
    printf("请输入要查找首位置的字符：");
    scanf("%c",&word);
    while(getchar() != '\n') continue;

    printf("该字符的首位置在：%p",pick_char(arr,word,n));
}

char * get_char(char * target,int i){
    int j;
    for(j=0;j<i;j++){
        target[j]=getchar();
        if(target[j] == '\n'){
        target[j] = '\0';
        return target;
        }
    }
    target[j] = '\0';
    while (getchar() != '\n') continue;
    return target;
}
char * pick_char(char *source,char c,int num){
    for(int k=0;k<num;k++){
        if(source[k] == c){
            return &source[k];
        }
    }
    return NULL;   
}