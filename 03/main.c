
#include <stdio.h>

int main() {
    int i,j,m,n,x;
    for(i = 2; i <= 168 / 2; i=i+2 )
    {
        if(168%i==0)
        {
            j=168/i;
            if(i>j&&(i+j)%2==0)
            {
                m = (i + j) / 2;
                n = (i - j) / 2;
                x = n * n - 100;
                printf("%d +100 = %d * %d\n",x,n,n);
                printf("%d +268 = %d * %d 可以看出%d满足这两个等式,证明%d符合条件\n",x,m,m,x,x);
            }
        }
    }

    return 0;
}