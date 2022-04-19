/*
#include<stdio.h>
    int main()
    {
        printf("hello Cvs02");
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
#include<stdio.h> //P5719 【深基4.例3】分类平均
int main()
    {
        int n, k, a = 0, b = 0, c1 = 0, c2 = 0;
        scanf("%d %d", &n, &k);
        for(int i = 1; i <= n; ++i){
            if(i % k == 0){a += i; ++c1;}
            else {b += i; ++c2;}
        }
        if(0 == a || 0 == b){
            return 0;
        }
        float averagea, averageb;
        averagea = (a * 1.0) / (c1 * 1.0);
        averageb = (b * 1.0) / (c2 * 1.0);
        printf("%.1f %.1f", averagea, averageb);
        return 0;
    }
#endif

#if 0
#include<stdio.h> //P5720 【深基4.例4】一尺之棰
int main()
    {
        float len = 0;
        scanf("%f", &len);
        int i = 1;
        for( ; ; ++i){
            len /= 2;
            if(len <= 1){
                break;
            }
        }
        printf("%d", i);
        return 0;
    }
#endif

