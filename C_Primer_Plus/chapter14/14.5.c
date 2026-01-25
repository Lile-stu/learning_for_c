/*5.编写一个程序满足下面的要求。
a.外部定义一个有两个成员的结构模板name：一个字符串储存名，一个
字符串储存姓。

b.外部定义一个有3个成员的结构模板student：一个name类型的结构，
一个grade数组储存3个浮点型分数，一个变量储存3个分数平均数。

c.在main()函数中声明一个内含CSIZE（CSIZE = 4）个student类型结构的
数组，并初始化这些结构的名字部分。用函数执行g、e、f和g中描述的任
务。
d.以交互的方式获取每个学生的成绩，提示用户输入学生的姓名和分
数。把分数储存到grade数组相应的结构中。可以在main()函数或其他函数中
用循环来完成。

e.计算每个结构的平均分，并把计算后的值赋给合适的成员。
f.打印每个结构的信息。

g.打印班级的平均分，即所有结构的数值成员的平均值。*/

#include <stdio.h>
#include <string.h>

#define CSIZE 4
#define SUBJECTS 3

struct name{
    char first[40];
    char last[40];
};

struct student{
    struct name names;
    double grade[3];
    double average;
};

int get_mark(struct student * students);
void get_average(struct student * students);
void put_info(struct student * students);

int main(void){
    struct student students[CSIZE] ={
        [0]={"stuA","stuAA"},
        [1]={"stuB","stuBB"},
        [2]={"stuC","stuCC"},
        [3]={"stuD","stuDD"}
    };

    for(int i = 0;i < CSIZE;){
        if(get_mark(students)==1){
            i++;
        }else {
            printf("Try again?");
        }

        if(i < CSIZE){
            printf("Do you want enter again?[Y/N]");
            char c;
            scanf(" %c",&c);
            while(getchar() != '\n'){continue;}
            if((c == 'Y') || (c == 'y')){}
            else break;
        }
    }

    get_average(students);
    put_info(students);

    return 0;
}

int get_mark(struct student *students){
    struct name temp_names;

    struct temp_grade{
        double grade[SUBJECTS];
    }mark;

    printf("Enter your name:");
    scanf("%s %s",temp_names.first,temp_names.last);
    while(getchar() != '\n'){
        continue;
    }
    printf("\nEnter your marks:");
    scanf("%lf %lf %lf",&mark.grade[0],&mark.grade[1],&mark.grade[2]);
    while(getchar() != '\n'){
        continue;
    }

    int found = 0;
    for(int i = 0;i < CSIZE;i++){
        if((strcmp(students[i].names.first,temp_names.first) == 0 )&& (strcmp(students[i].names.last,temp_names.last) == 0 )){
            for(int j = 0;j < SUBJECTS;j++){
                students[i].grade[j] = mark.grade[j];
            }
            found = 1;
            break;
        }
    } 
    return found;
}

void get_average(struct student *students){
    for(int i = 0;i < CSIZE;i++){
        students[i].average = (students[i].grade[0]+students[i].grade[1]+students[i].grade[2])/3.0;
    }
}

void put_info(struct student * students){
    double all = 0;
    for(int i = 0;i < CSIZE;i++){
        printf("\n\nStudent's name:%s %s",students[i].names.first,students[i].names.last);
        printf("\n Your grades:");
        for(int j = 0;j < 3;j++){
            printf("\n%.2lf",students[i].grade[j]);
        }
        printf("\nYour average mark:%.2lf\n\n\n",students[i].average);
        all += students[i].average;
    }
    printf("\nAll average:%0.2lf",all/CSIZE);
    printf("\ndone");
}

