/*题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）

程序分析：兔子的规律为数列1,1,2,3,5,8,13,21....，即下个月是上两个月之和（从第三个月开始）。*/
//斐波那契?!
#include <stdio.h>

/*int main() {
    int f1,f2;
    f1=1;
    f2=1;
    int i;
    for(i=1;i<=20;i++){
        printf("%12d%12d",f1,f2);
        if(i%2==0)
            printf("\n");
        f1=f1+f2;
        f2=f1+f2;
    }
    return 0;
}*/
//使用数组实现如下:
/*int main()
{
    int n[41],i;
    n[0]=0;
    n[1]=1;
    n[2]=1;
    for(i=3;i<=40;i++){
        n[i]=n[i-1]+n[i-2];
    }
    printf("month\tnumber\n");
    for(i=1;i<=40;i++){
        printf("%d\t%d\n",i,n[i]);
    }

    return 0;
}*/
//单纯斐波那契递归
    /*int fibonaci(int i)
    {
        if(i==0)
        {
            return 0;
        }
        if(i==1)
        {
            return 1;
        }
        return fibonaci(i-1)+fibonaci(i-2);
    }
int main()
{
    int i;
    printf("month\tnumber\n");
    for(i=1;i<=40;i++)
    {
        printf("%d\t%d\n",i,fibonaci(i));
    }
    return 0;
}*/
//从上述的运行情况来看,递归真的消耗了太多的内存,运行速度慢不说,再大的数字就极有可能导致崩溃.
//下面是快速的短小精悍代码
int main()
{
    int now=1,prev_1=1,prev_2=0;
    printf("%i\n",now);
    for(int i=1;i<40;i++)
    {
        now=prev_1+prev_2;
        printf("%i\n",now);
        prev_2=prev_1;
        prev_1=now;
    }
}