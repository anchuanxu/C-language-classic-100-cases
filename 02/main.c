//传统的计算奖金利润,用数轴分割的方法,用起来很笨拙,本例尝试使用循环代码优化的适用性
#include <stdio.h>

int main() {
    int i;
    double profit;
    double bonus=0;
    float  scope[]={100000,200000,400000,600000,1000000};
    float  commission[]={0.1,0.075,0.05,0.03,0.015,0.01};
    printf("您好,请问您的净利润是多少?\n");
    scanf("%lf",&profit);
    for (i=0;i<5;i++)
    {
        if(profit < scope[i])
        {
            bonus += profit * commission[i];
            break;
        }
        else
        {
            bonus += scope[i] * commission[i];
            profit -= scope[i];
        }
    }
    printf("奖金是%.2lf\n",bonus);

    return 0;
}