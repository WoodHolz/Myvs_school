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
