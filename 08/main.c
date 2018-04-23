//输出99口诀表.
//分析:分行与分列考虑,共九行九列,i控制行,j控制列.

#include <stdio.h>

/*int main() {
    int i,j,result;
    printf("\n");
    for (i=1;i<10;i++)
    {
        for(j=1;j<10;j++){
            result=i*j;
            printf("%d*%d=%-3d",i,j,result);//%-3d表示左对齐,占三位
        }
        printf("\n");//每一行最后一行换行;
    }
    return 0;
}//普通矩阵版本*/
//下面是文具盒版本
/*int main()
{
    int i,j,result;
    printf("\n");
    for(i=1;i<10;i++){
        for(j=1;j<=i;j++){
            result=i*j;
            printf("%d*%d=%-3d",j,i,result);
        }
        printf("\n");
    }
}*/
//使用制表符版本
int main()
{
   char i,j;
    for(i=1;i<10;i++){
        for(j=1;j<i+1;j++)
        {
            printf("%d*%d=%d\t",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}