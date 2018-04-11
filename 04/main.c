//输入某年某月某日,判断这一天是这一年的第几天

#include <stdio.h>

int main() {
    int day,month,year,sum,leap;
    printf("\n请输入年月日,格式为:年,月,日,例如(2018,1,25)\n");
    scanf("%d,%d,%d",&year,&month,&day);//注意输入的格式:2018,1,25
    switch(month)
    {
        case 1: sum=0;break;
        case 2: sum=31;break;
        case 3: sum=59;break;
        case 4: sum=90;break;
        case 5: sum=120;break;
        case 6: sum=151;break;
        case 7: sum=181;break;
        case 8: sum=212;break;
        case 9: sum=243;break;
        case 10: sum=273;break;
        case 11: sum=304;break;
        case 12: sum=334;break;
        default:printf("data error!");
            break;

    }
    sum=sum+day;
    //下面判断是否是闰年的情况.
    if(year%400==0||(year%4==0&&year%100!=0)){
        leap=1;
    }
    else{
        leap=0;
    }
    //再次对闰年多出来的一天进行条件判断,看是否需要多加一天
    if(leap==1&&month>2){
        sum++;
    }
    printf("这是这一年的第%d天.",sum);
    printf("\n");
    return 0;
}