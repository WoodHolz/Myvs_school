/*
#include<stdio.h>
int main()
{
    printf("Hello");
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int t1, t2;
    scanf("%d:%d", &t1, &t2);
    if(t1 > 12){
    printf("%02d:%02d PM", (t1 - 12), t2);
    }
    else if(t1 == 12 && t2 > 0) {
    printf("12:%02d PM", t2);
    }
    else {
    printf("%02d:%02d AM", t1, t2);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d,%d", &a, &b);
    if(a == 0||b == 0){
    return 0;
    }
    if(a % 2){
    if(b % 2){
        printf("%d-%d=%d", a, b, a - b);
    }
    else
        printf("%d*%d=%d", a, b, a * b);
    }
    else{
    if(b % 2){
        printf("%d/%d=%d", a, b, a / b);
    }
    else
    printf("%d+%d=%d", a, b, a + b);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a < 1){
    return 0;
    }
    else if(0 == a % 3){
    if(a % 5){
        printf("%d", a % 5);
        }
    }
    else if(0 == a % 5){
    if(a % 3){
        printf("%d", a % 3);
    }
    } 
    else{
    printf("%d", a % 15);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a;
    scanf("%o", &a);
    printf("%o(8)=", a);
    printf("%d(10)\n", a);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int min;
    scanf("%d", &min);
    if(min < 0){
    return 0;
    }
    else
    printf("%d(m)=%d(h):%02d(m)", min, min / 60, min % 60);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    float x1, y1, x2, y2, x;
    scanf("%f,%f", &x1, &y1);
    scanf("%f,%f", &x2, &y2);
    x = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    printf("D=%.2f", x);
    return 0;
}
*/
/*
#include<stdio.h>
void main()
{
int x,y,z;
scanf("%d%d%lf",&x,&y,&z);
}
*/
/*
#include<stdio.h>
void main()
{ 
float x;
x=213.82631; 
printf("%-4.2f\n",x); 
}
*/
/*
#include<stdio.h>
int main()
{
int a, b;
scanf("%d %d", &a, &b);
if((b < 0) || (a < 0))
return 0;
else 
printf("%d", a * b);
return 0;
}
*/
/*
#include<stdio.h>
int main()
{
float t; int n;
scanf("%f %d", &t, &n);
printf("%.3f\n", t / n);
printf("%d", n * 2);
return 0;
}
*/
/*
#include<stdio.h>
int main()
{
int a, b, c, d, x;
scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a > c) return 0;
    else 
        x = (c - a) * 60 + (d - b);
    printf("%d %d", x / 60, x % 60);
return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
int n;
scanf("%d", &n);
switch (n)
{
    case 1:
    printf("I love Luogu!");
    break;
    case 2:
    printf("6 4");
    break;
    case 3:
    printf("3\n");
    printf("12\n");
    printf("2\n");
    break;
    case 4:
    printf("166.667");
    break;
    case 5:
    printf("15");
    break;
    case 6:
    printf("10.8167");
    break;
    case 7:
    printf("110\n90\n0");
    break;
    case 8:
    printf("31.4159\n78.5398\n523.599\n");
    break;
    case 9:
    printf("22");
    break;
    case 10:
    printf("9");
    break;
    case 11:
    printf("33.3333");
    break;
    case 12:
    printf("13\n");
    printf("R\n");
    break;
    case 13:
    printf("16");
    break;
    case 14:
    printf("50");
    break;
    }
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
#include<stdio.h>
#include<math.h>
    int main()
    {
        float a, b, c, p;
        scanf("%f %f %f", &a, &b, &c);
        p = (a + b + c) / 2;
        printf("%.1f", sqrt(p * (p - a) * (p - b) * (p - c)));
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        int a = 0, b = 0;
        scanf("%d %d", &a, &b);
        printf("%d", ((10 * a + b) / 19));
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        int m, t, s, r;
        scanf("%d %d %d", &m, &t, &s);
        if(t != 0){
        r = m - s / t;
            if(s % t != 0)
            r = r - 1;
            if(0 > r)
            r = 0;
        }
        printf("%d", r);
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        unsigned long long n;
        scanf("%lld", &n);
        if(n < 0){
            return 0;
        }
        else{
        printf("%lld", n*(n-1)/2*(n-2)/3*(n-3)/4);
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h>
#include<math.h>
    int main()
{
    int s, v, time, hour, min;
    scanf("%d %d", &s, &v);
    if(s % v == 0){ 
        time = s / v + 10;
    }
    else{ 
    time = s / v + 11;
    }
    if(time < 1921){
        if(time < 481){
            hour = 7 - time / 60;
            min = 60 - time % 60;
        }
        else{
            hour = 23 - (time - 480) / 60;
            min = 60 - time % 60;
        }
    }
    printf("%02d:%02d", hour, min);
    return 0;
}
#endif
#if 0
#include<stdio.h>
int main()
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        printf("%d", a / 5 + b / 10 * 3 + c / 2);
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        int a, b = 0, c = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
        scanf("%d", &a);
        if(a % 2 == 0){
            b = 1;
            }
        if(4 < a && 13 > a){
            c = 1;
        }
        if(b == 1 && c == 1){
            t1 = 1;
            t2 = 1;
        }
        if(b == 1 | c == 1){
            t2 = 1;
        }
        if(b == 1){
            if(c == 0){
                t3 = 1;
            }
        }
        if(c == 1){
            if(b == 0){
                t3 = 1;
            }
        }
        if(b == 0 && c == 0){
            t4 = 1;
        }
        printf("%d %d %d %d", t1, t2, t3, t4);
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        int y, a = 0;
        scanf("%d", &y);
        if(y < 1582){
            return 0;
        }
        else{
            if((y % 4 == 0 && y %100 !=0) || (y % 400 == 0)){
                a = 1;
            }
        }
        printf("%d", a);
        return 0;
    }
#endif
#if 0
#include<stdio.h> //(1)
#include<math.h>
int main()
    {
        float x, y;
        scanf("%f", &x);
        if(10 > x && 0 <= x){
            y = sin(x);
        }
        else if(10 <= x && x < 20){
            y = cos(x);
        }
        else if(20 <= x && x < 30){
            y = exp(x) - 1;
        }
        else if (30 <= x && 40 > x){
            y = log(x + 1);
        }
        else{
            for(int i = 0; i < 4; ++i){
                x *= x;
                y = x;
            }
        }
        printf("%f", y);
        return 0;
    }
#endif
#if 0
#include<stdio.h> //(2)
int main()
    {
        float x, y;
        scanf("%f", &x);
        if(x <= 50){
            y = x * 0.15;
        }
        else{
            y = (x - 50) / 10 + 7.5;
        }
        printf("%f", y);
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        int x;
        scanf("%d", &x);
        switch (x)
        {
        case 0:
            printf("Today, I ate 0 apple.");
            break;
        case 1:
            printf("Today, I ate 1 apple.");
            break;
        default:
            printf("Today, I ate %d apples.", x);
            break;
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        int a, x, y;
        scanf("%d", &a);
        x = 5 * a;
        y = 3 * a + 11;
        if(x > y){
            printf("Luogu");
        }
        else{
            printf("Local");
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        float m, n;
        scanf("%f %f", &m, &n);
        float x = m / (n * n);
        if(x < 18.5){
            printf("Underweight");
        }
        else if(18.5 <= x && x < 24){
            printf("Normal");
        }
        else{
            printf("%.4f\n", x);
            printf("Overweight");
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h> //(3)
int main()
    {
        int a[3] = {}, t;
        for(int i = 0; i < 3; ++i){
            scanf("%d", &a[i]);
        }
        for(int m = 0; m < 3; ++m){
            for(int n = 0; n < 3 - m; ++n){
                if(a[n] > a[n + 1]){
                    t = a[n];
                    a[n] = a[n + 1];
                    a[n + 1] = t;
                }
            }
        }
        printf("%d %d %d", a[0], a[1], a[2]);
        return 0;
    }
#endif
#if 0
#include<stdio.h> //(4)
int main()
    {
        char a;
        scanf("%c", &a);
        if(a > ('A' - 1) && a < ('z' + 1)){
            printf("字母 %c", a);
        }
        else if(a >= '0' && a <= '9'){
            printf("数字 %c", a);
        }
        else{
            printf("其他字符 %c", a);
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h> //P5716 【深基3.例9】月份天数
int main()
    {
        int yr, mon, day;
        scanf("%d %d", &yr, &mon);
        switch (mon)
        {
        case 1:
            day = 31;
            break;
        case 2:
            if((yr % 4 == 0 && yr % 100 != 0)||(yr % 400 == 0)){
                day = 29;
                }
            else{
                day = 28;
            }
            break;
        case 3:
            day = 31;
            break;
        case 4:
            day = 30;
            break;
        case 5:
            day = 31;
            break;
        case 6:
            day = 30;
            break;
        case 7:
            day = 31;
            break;
        case 8:
            day = 31;
            break;
        case 9:
            day = 30;
            break;
        case 10:
            day = 31;
            break;
        case 11:
            day = 30;
            break;
        case 12:
            day = 31;
            break;
        }
        printf("%d", day);
        return 0;
    }
#endif
#if 0
#include<stdio.h>//P1085 [NOIP2004 普及组] 不高兴的津津
int main()
    {
        int a, b, c[10];
        for(int i = 0; i < 7; ++i){
            scanf("%d %d", &a, &b);
            c[i] = a + b;
        }
        int max = c[0], n = 0;
        for(int m = 0; m < 7; ++m){
            if(max < c[m]){
                max = c[m];
                n = m;
            }
        }
        printf("%d", max > 8?n + 1 : 0);
        return 0;
    }
#endif
#if 0
#include<stdio.h>//P1909 [NOIP2016 普及组] 买铅笔
int main()
    {
        int x, a[100], b[100];
        scanf("%d", &x);
        for(int i = 0; i < 3; ++i){
            scanf("%d %d", &a[i], &b[i]);
            if(x % a[i] == 0){
                a[i] = (x / a[i]) * b[i];
            }
            else{
                a[i] = (x / a[i] + 1) * b[i];
            }
        }
        int min = a[0];
        int m = 0;
        while(m < 3){
            if(min > a[m]){
                min = a[m];
            }
            ++m;
        }
        printf("%d", min);
        return 0;
    }
#endif
#if 0
#include<stdio.h>//P1055 [NOIP2008 普及组] ISBN 号码 wrong
#include<string.h>
int main()
    {
        char a[20], en = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'X'};
        scanf("%s", a);
        int n = 1, m = 0;
        for(int i = 0; i < strlen(a); ++i){
            if(i != 1 && i != 5 && i != 11 && i != 12){
                m += (a[i] * n);
                ++n;
            }
        }
        int q = m % 11;
        if(a[12] == en[q]){
            printf("Right");
        }
        else{
            a[12] = en[q];
            printf("%s", a);
            }
        return 0;
    }
#endif





#if 0
#include<stdio.h>
int main()
    {
        return 0;
    }
#endif



#if 0
#include<stdio.h>//提升(1)
#include<math.h>
int main()
    {
        float square; 
        unsigned long x, y;
        scanf("(%u,%u)", &x, &y);
        if(((x - 2) * (x - 2) + (y - 2) * (y - 2)) <= 1){
            printf("10(m)");
        }
        else if(((x + 2) * (x + 2) + (y - 2) * (y - 2)) <= 1){
            printf("10(m)");
        }
        else if(((x + 2) * (x + 2) + (y + 2) * (y + 2)) <= 1){
            printf("10(m)");
        }
        else if(((x - 2) * (x - 2) + (y + 2) * (y + 2)) <= 1){
            printf("10(m)");
        }
        else{
            printf("0(m)");
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h> //综合(1)
int main()
    {
        float a, b, r;
        char c;
        scanf("%f %c %f", &a, &c, &b);
        switch (c)
        {
        case '+':
            r =  a + b;
            break;
        case '-':
            r = a - b;
            break;
        case '*':
            r = a * b;
            break;
        case '/':
            if(0 == b){
                return 0;
            }
            else{
                r = a / b;
            }
            break;
        case '%':
            if(0 == b){
                return 0;
            }
            else{
                r = (int)a % (int)b;
            }
            break;
        }
        printf("%f", r);
        return 0;
    }
#endif
#if 0
#include<stdio.h>//综合(2)
#include<string.h>
#include<math.h>
int main()
    {
        float a, b, r;
        char c[5];
        printf("请输入运算符\n");
        scanf("%s", &c);
        if('+' == c[0] || '-' == c[0] || '*' == c[0] || '/' == c[0] || '%' == c){
            printf("请输入两个数\n");
            scanf("%f %f", &a, &b);
            switch (c[0]){
            case '+': r = a + b; break;
            case '-': r = a - b; break;
            case '*': r = a * b; break;
            case '/':if(0 == b){
                    printf("除数为零");
                    return 0;
                }
                else{
                    r = a / b;
                }
                break;
            case '%':
                if(0 == b){
                    printf("除数为零");
                    return 0;
                }
                else{
                    r = (int)a % (int)b;
                }
            break;
            }
        }
        else{
            printf("请输入一个数\n");
            scanf("%f", &a);
            switch (c[0])
            {
            case 's':
                if('i' == c[1] && 'n' == c[2]){
                    r = sin(a);
                }
                else if('q' == c[1] && 'r' == c[2] && 't' == c[3]){
                    r = sqrt(a);
                }
                break;
            case 'c':
                if('o' == c[1] && 's' == c[2]){
                    r = cos(a);
                }
                else{
                    printf("无此运算:(");
                    return 0;
                }
                break;
            case 't':
                if('a' == c[1] && 'n' == c[2]){
                    r = tan(a);
                }
                else{
                    printf("无此运算:(");
                    return 0;
                }
                break;
            case 'e':
                if('x' == c[1] && 'p' == c[2]){
                    r = exp(a);
                }
                else{
                    printf("无此运算:(");
                    return 0;
                }
                break;
            default:
                printf("无此运算:(");
                return 0;
            }
        }
        printf("结果为：\n%f", r);
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        for(int i = 0; i < 4; i++){
            for(int m = 0;m < i + 1; ++m){
                printf(" ");
            }
            for(int n = 0; n < 7 - 2 * i; n++){
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h>//mooc 星期推算
int main()
    {
        int d;
        d = 2020 % 7;
        switch (d)
        {
        case 0:
            printf("星期天");
            break;
        case 1:
            printf("星期一");
            break;
        case 2:
            printf("星期二");
            break;
        case 3:
            printf("星期三");
            break;
        case 4:
            printf("星期四");
            break;
        case 5:
            printf("星期五");
            break;
        case 6:
            printf("星期六");
            break;
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h>//mooc 特征数判断
int main()
    {
        int a;
        scanf("%d", &a);
        if(a < 1){
            printf("Data error!");
            return 0;
        }
        if(!(a % 5) && !(a % 7)){
            printf("Yes!");
        }
        else{
            printf("No!");
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        int x;
        scanf("%d", &x);
        switch (x)
        {
        case 0:
            printf("停");
            break;
        case 1:
            printf("行");
            break;
        default:
            printf("等待");
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h>//P1422 小玉家的电费
int main()
    {
        float a;
        scanf("%f", &a);
        if(a <= 150){
            a *= 0.4463;
        }
        else if(a <= 400){
            a = (a - 150) * 0.4663 + 150 * 0.4463;
        }
        else{
            a = (a - 400) * 0.5663 + 150 * 0.4463 + 250 * 0.4663;
        }
        printf("%.1f", a);
        return 0;
    }
#endif
#if 0
#include<stdio.h>//P1424 小鱼的航程(改进版)
int main()
    {
        int a, b, n;
        scanf("%d %d", &a, &b);
        int i = 0;
        while(i < b){
            if(a != 6 && a != 7){
                n += 250;
            }
            if(a == 7){
                a = 1;
            }
            else{
                ++a;
            }
            ++i;
        }
        printf("%d", n);
        return 0;
    }
#endif
#if 1
#include<stdio.h>
#include<math.h>
int main()
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int t;
        if(b < c){
            t = c;
            c = b;
            b = t;
            if(a < b){
                t = b;
                b = a;
                a = t;
            }
        }
        for(int i = 0; b < c; )
        return 0;
    }
#endif
