/*题目：判断101到200之间的素数。

程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除， 则表明此数不是素数，反之是素数。

实例*/
#include <stdio.h>
#include <math.h>

int main() {
    int i;
    int j;
    for(i=101;i<201;i++)
    {
        for(j=2;j<i;j++)
        {
            if (i%j==0) break;
        }
        if(j>=i)
        printf("%d\t",i);
    }
    return 0;
}