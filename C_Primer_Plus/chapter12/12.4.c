/*4.在一个循环中编写并测试一个函数，该函数返回它被调用的次数。*/
#include <stdio.h>

int return_time(void){
    static int time = 0;
    time++;
    return time;
}

int main(){
    for(int j = 0;j<10;j++){
        return_time();
    }
    printf("time:%d",return_time());
    return 0;
}