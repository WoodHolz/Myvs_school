/*
#include<stdio.h>
    int main()
    {
        printf("��ã� Cvs03");
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
#include<stdio.h> //P5737 �����7.��3������չʾ
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
#include<stdio.h> // P5739 �����7.��7������׳�
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
        printf("\n������ҪͶƱ�ĺ�ѡ��:");
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
        printf("������ͶƱ����:");
        scanf("%d", &m);
        getchar();
        hs(leader, m);
        struct yrname temp;
        for(int i = 0; i < 3 - 1; ++i){
            for(int ii = i + 1; ii < 3; ++ii){
                if(leader[i].count < leader[ii].count){
                    temp = leader[i];
                    leader[i] = leader[ii];
                    leader[ii] = temp;
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
        printf("���ϣ�����%d��ȡ����", a);
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
    printf("\r����%02dʱ%02d��%02d��", cl.hr, cl.min, cl.sec);
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
        printf("\n���������õ���ʱ��Сʱ��:");
        scanf("%d", &cl.hr);
        printf("\n���������õ���ʱ�ķ�����:");
        scanf("%d", &cl.min);
        printf("\n���������õ���ʱ������:");
        scanf("%d", &cl.sec);
        printf("\n***��'s'����ʼ����ʱ***");
        printf("\n***��'e'��ֹͣ����ʱ***\n");
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
    printf("\n�Ƿ���Ҫ��ѯѧ����Ϣ��(�ش�'1'or'0')\n");
    int a;
    scanf("%d", &a);
    if(a == 0){return;}
    else if(a == 1){
        printf("����ѧ�Ų�ѯ:");
        int no;
        scanf("%d", &no);
        
        for(int i = 0; i < n; ++i){
            if(stu[i].num == no){
                printf("\nѧ��:%d", stu[i].num);
                printf("\n����:%s", stu[i].name);
                for(int ii = 0; ii < 3; ++ii){
                    printf("\n��%d�ųɼ�:%d", ii + 1, stu[i].grade[ii]);
                }
                printf("\nƽ����: %.1f", stu[i].avr);
            }
        }
    }
    
}

main()
    {
        struct student stu[50];
        //input
        printf("������ѧ������:");
        int n;
        scanf("%d", &n);
        getchar();
        for(int i = 0; i < n; ++i){
            printf("\n������ѧ��:");
            scanf("%d", &stu[i].num);
            //getchar();
            printf("\n����������:");
            scanf("%s", stu[i].name);
            //getchar();
            //flushall();
            
            int t = 0;
            for(int ii = 0; ii < 3; ++ii){
                printf("\n�������%d�ųɼ�:", ii + 1);
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
        printf("\n����:\n");
        for(int i = 0; i < n; ++i){
            printf("\nѧ��%d", stu[i].num);
            printf("\n����%s", stu[i].name);
            for(int ii = 0; ii < 3; ++ii){
                printf("\n��%d�ųɼ�:%d", ii + 1, stu[i].grade[ii]);
            }
            printf("\nƽ����:%.1f\n", stu[i].avr);
        }
        //search
        search(stu, n);
        return 0;
    }
#endif

#if 0
#include<stdio.h> //Luogu P1428 С��ȿɰ�
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

#if 0
//δ��� �������ɵݹ�
#include<stdio.h> //Luogu P5461 ����ս��
#include<math.h>
int excuse()
{
    int n; 
    scanf("%d", &n);
    int r = pow(2, n), c = r;
    int a[100][100] = {0};
    
    while(1){
        if(n - 1){
            int r1 = pow(2, n - 1);
            int c1 = r1;
            //upleft
            for(int i = 0; i < r1; ++i){
                for(int j = 0; j < c1; ++j){
                    a[i][j] = 1;
                }
            }
            //upright 
            for(int );
        }
        else break;
    }
/*
    a[0][n + 1] = 1;
    for(int i = 1; i < r; ++i){
        for(int j = 1; j < c; ++j){
            a[i][j] = a[i - 1][j] ^ a[i - 1][j + 1];
        }
    }
*/
    for(int i = 0; i < r; ++i){
        int bl = 0;
        for(int j = 0; j < c; ++j){
            a[i][j] == 1 ? printf("0") : printf("1"); bl++;
            if(bl < c) printf(" ");
            if(j == c - 1) printf("\n");
        }
    }
}
int main()
    {
        //int n;
        //scanf("%d", &n);
        excuse();
        return 0;
    }
#endif

#if 0
#include<stdio.h> //Luogu P5743 �����7.ϰ8�����ӳ���
void peech()
{
    int n;
    scanf("%d", &n);
    int sum = 1;
    for(int i = 1; i < n; ++i){
        sum = (sum + 1) * 2;
    }
    printf("%d", sum);
}
int main()
    {
        peech();
        return 0;
    }
#endif

#if 0
#include<stdio.h> //Luogu P5733 �����6.��1���Զ�����
int main()
    {
        char a[100];
        int n = 0;
        char in = getchar();
        while(in != '\n'){
            a[n++] = in;
            in = getchar();
        }
        for(int i = 0; i < n; ++i){
            if(a[i] >= 'a' && a[i] <= 'z'){
                a[i] -= 32;
            }
        }
        printf("%s", a);
        return 0;
    }
#endif

#if 0
#include<stdio.h> //PTA 7-1 �ɼ�����
struct stu
{
    int num; //ѧ��
    float grade; //�ɼ�
};
void sort(struct stu *ps, int n)
{
    struct stu t;
    for(int i = 0; i < n - 1; ++i){ //ð��  ʲôʱ�����������Ű���������Ц
        for(int ii = i; ii < n; ++ii){
            if(ps[i].grade < ps[ii].grade){
                t = ps[i]; ps[i] = ps[ii]; ps[ii] = t;
            }
        }
    }
    //output
    
    int rank = 0; //�����еķ���һ
    for(int i = 0; i < n; ++i){ 
        if(ps[i].grade != ps[i - 1].grade){
            rank = i;
            printf("%d %d %.2f\n", rank + 1, ps[i].num, ps[i].grade);
        }
        else printf("%d %d %.2f\n", rank + 1, ps[i].num, ps[i].grade);
    }
    
    /*
    for(int i = 0; i < n; ++i){ //�����еķ����� wrong
        int t = 0;
        if(ps[i].grade == ps[i - 1].grade){
            t++;
        }
        printf("%d %d %.2f\n", i - t + 1, ps[i].num, ps[i].grade);
    }
    */
}

main()
    {
        struct stu ps[100];
        int n; //ѧ������
        scanf("%d", &n);
        for(int i = 0; i < n; ++i){
            scanf("%d", &ps[i].num);
            scanf("%f", &ps[i].grade);
        }
        sort(&ps, n);
        return 0;
    }
#endif

#if 0
#include<stdio.h> //PTA 7-3 ����������Ӧ��
struct employee
{
    int num;
    char name[50];
    char sort;
    char part[50];
};
void input(struct employee school[], int n)
{
    for(int i = 0; i < n; ++i){
        scanf("%d %s %c", &school[i].num, school[i].name, &school[i].sort);
        gets(school[i].part);
        //gets(school[i].num);
        //getchar();
        //gets(school[i].name);
        //getchar();
        //scanf("%c", &school[i].sort);
        //gets(school[i].part);
        //getchar();
    }
}
void sort(struct employee school[], int n)
{
    int a = 0, b = 0;
    for(int i = 0; i < n; ++i){
        if(school[i].sort == 't'){
            a++;
        }
        else if(school[i].sort == 'w'){
            b++;
        }
    }
    printf("tcount = %d, wcount = %d", a, b);
}
main()
    {
        struct employee school[50];
        int n;
        scanf("%d", &n);
        input(school, n);
        //output
        for(int i = 0; i < n; ++i){
            printf("%d ", school[i].num);
            printf("%s ", school[i].name);
            printf("%c", school[i].sort);
            printf("%s\n", school[i].part);
        }
        sort(school, n);
        return 0;
    }
#endif