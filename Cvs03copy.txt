/*
#include<stdio.h>
    int main()
    {
        printf("你好！ Cvs03");
        return 0;
    }
*/




#if 0
#include<stdio.h>
int main()
    {
        return 0;
    }
#endif




#if 0
#include<stdio.h> //P5737 【深基7.例3】闰年展示
void runnian()
    {
        int a, b, n = 0, re[1000] = {0};
        scanf("%d %d", &a, &b);
        for(int i = a; i < b + 1; ++i){
            if(((!(i % 4)) && (i % 100)) || (! (i % 400))){
                re[n++] = i;
            }
        }
        printf("%d\n", n);
        int c = 0;
        for(int i = 0; i < n; ++i){
            printf("%d", re[i]); c++;
            if(c < n){
                printf(" ");
            }
        }
    }
int main()
    {
        runnian();
        return 0;
    }
#endif



#if 0
#include<stdio.h> // P5739 【深基7.例7】计算阶乘
int jiecheng(int x)
    {
        if(x > 1){
            return x * jiecheng(x - 1);
        }
        else return 1;
    }
int main()
    {
        int a; 
        scanf("%d", &a);
        printf("%d", jiecheng(a));
        return 0;
    }
#endif


#if 0
#include<stdio.h> //experiment 6 part 1-1
#include<string.h>
struct yrname
{
    char name[20];
    int count;
};
hs(struct yrname leader[], int m)
{
    char name[20];
    for(int i = 0; i < m; ++i){
        printf("\n请输入要投票的候选人:");
        gets(name);
        for(int ii = 0; ii < 3; ++ii){
            if(! (strcmp(name, leader[ii].name))){
                leader[ii].count++;
                break;
            }
        }
    }
}
main()
    {
        struct yrname leader[3] = {"Li", 0, "Wu", 0, "Fu", 0};
        int m;
        printf("请输入投票人数:");
        scanf("%d", &m);
        getchar();
        hs(leader, m);
        for(int i = 0; i < 3 - 1; ++i){
            for(int ii = i + 1; ii < 3; ++ii){
                if(leader[i].count < leader[ii].count){
                    leader[i].count ^= leader[ii].count ^= leader[i].count ^= leader[ii].count;
                }
            }
        }
        for(int i = 0; i < 3; ++i){
            printf("%s %d\n", leader[i].name, leader[i].count);
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h> //experiment 6 part 1-2
#include<string.h>
struct bull
{
    char color[20];
}bull[5] = {"red", "yellow", "white", "blue", "black"};

main()
    {
        int a = 0;
        for(int i = 0; i < 5; ++i){
            for(int ii = 0; ii < 5; ++ii){
                for(int iii = 0; iii < 5; ++iii){
                    if(i != ii && i != iii && ii != iii){
                        printf("%s %s %s\n", bull[i].color, bull[ii].color, bull[iii].color);
                        a++;
                    }
                }
            }
        }
        printf("综上，共有%d种取法。", a);
        return 0;
    }
#endif
#if 0
#include<stdio.h> //experiment 6 part 2
#include<windows.h>
#include<conio.h>
struct time
{
    int hr;
    int min;
    int sec;
};
void dis(struct time cl)
{
    printf("\r还有%02d时%02d分%02d秒", cl.hr, cl.min, cl.sec);
}
struct time run(struct time cl)
{
    cl.sec--;
    if(cl.sec == 0 && cl.min != 0){
        cl.sec = 59;
        cl.min--;
    }
    if(cl.min == 0 && cl.hr != 0){
        cl.min = 59;
        cl.hr--;
    }

    Sleep(1000);
    return cl;
};

main()
    {
        struct time cl;
        printf("\n请输入设置倒计时的小时数:");
        scanf("%d", &cl.hr);
        printf("\n请输入设置倒计时的分钟数:");
        scanf("%d", &cl.min);
        printf("\n请输入设置倒计时的秒数:");
        scanf("%d", &cl.sec);
        printf("\n***按's'键开始倒计时***");
        printf("\n***按'e'键停止倒计时***\n");
        char str = getch();
        while(1){
            if(str == 's' || str == 'S'){
                cl = run(cl);
                dis(cl);
                if(cl.hr == 0 && cl.min == 0 && cl.sec == 0) break;
                if(kbhit()){
                    str = getch();
                    if(str == 'e' || str == 'E') break;
                }
            }
            else if(str == 'e' || str == 'E') break;
            
            else str = getch();
        }
        
        return 0;
    }
#endif

#if 0
#include<stdio.h> //experiment 6 part 3
#include<string.h>
struct student
{
    int num;
    char name[20];
    int grade[3];
    float avr;
};

search(struct student stu[], int n)
{
    printf("\n是否需要查询学生信息？(回答'1'or'0')\n");
    int a;
    scanf("%d", &a);
    if(a == 0){return;}
    else if(a == 1){
        printf("输入学号查询:");
        int no;
        scanf("%d", &no);
        
        for(int i = 0; i < n; ++i){
            if(stu[i].num == no){
                printf("\n学号:%d", stu[i].num);
                printf("\n姓名:%s", stu[i].name);
                for(int ii = 0; ii < 3; ++ii){
                    printf("\n第%d门成绩:%d", ii + 1, stu[i].grade[ii]);
                }
                printf("\n平均分: %.1f", stu[i].avr);
            }
        }
    }
    
}

main()
    {
        struct student stu[50];
        //input
        printf("请输入学生数量:");
        int n;
        scanf("%d", &n);
        getchar();
        for(int i = 0; i < n; ++i){
            printf("\n请输入学号:");
            scanf("%d", &stu[i].num);
            //getchar();
            printf("\n请输入姓名:");
            scanf("%s", stu[i].name);
            //getchar();
            //flushall();
            
            int t = 0;
            for(int ii = 0; ii < 3; ++ii){
                printf("\n请输入第%d门成绩:", ii + 1);
                scanf("%d", &stu[i].grade[ii]);
                t += stu[i].grade[ii];
            }
            stu[i].avr = t / 3.0;
        }
        //sort
        struct student temp;
        for(int i = 0; i < n - 1; ++i){
            for(int ii = i + 1; ii < n; ++ii){
                if(stu[i].avr < stu[ii].avr){
                    temp = stu[i];
                    stu[i] = stu[ii];
                    stu[ii] = temp;
                }
            }
        }
        printf("\n排名:\n");
        for(int i = 0; i < n; ++i){
            printf("\n学号%d", stu[i].num);
            printf("\n姓名%s", stu[i].name);
            for(int ii = 0; ii < 3; ++ii){
                printf("\n第%d门成绩:%d", ii + 1, stu[i].grade[ii]);
            }
            printf("\n平均分:%.1f\n", stu[i].avr);
        }
        //search
        search(stu, n);
        return 0;
    }
#endif

#if 0
#include<stdio.h> //Luogu P1428 小鱼比可爱
void cute()
{
    int n;
    scanf("%d", &n);
    int a[100] = {0};
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
    }
    printf("0 ");// the first except
    for(int i = 1; i < n; ++i){
        int t = 0;
        for(int I = 0; I < i; ++I){
            if(a[I] < a[i]){
                t++;
            }
        }
        printf("%d ", t);
    }
}
int main()
    {
        cute();
        return 0;
    }
#endif