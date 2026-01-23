/*1.设计并测试一个函数，从输入中获取下n个字符（包括空白、制表
符、换行符），把结果储存在一个数组里，它的地址被传递作为一个参数。*/

#include <stdio.h>

char * get_arr(char *,int);

int main(void){
    int n,words;
    printf("请输入最大字符数：");
    scanf("%d",&n);
    while (getchar() != '\n') continue;
    char arr[n+1];
 
    
    if(get_arr(arr,n)){
        arr[n] = '\0';
        printf("我们读取的内容是：%s",arr);
    }
    return 0;
}

char * get_arr(char * target,int num){
    for(int j=0;j<num;j++){
        target[j] = getchar();
        if (target[j] == EOF){
            return NULL;
        }
    }
    return target;  
}