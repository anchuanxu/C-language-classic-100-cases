#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t  i;
    uint32_t  j;
    uint32_t  k;
    int counter=0;

    for (i=1;i<5;i++)
    {
        for (j=1;j<5;j++)
        {
            if(j==i)
            {
                continue;
            }
            for (k=1;k<5;k++)
            {
                if(k==j||k==i)
                {
                    continue;
                }

                printf("%u,%u,%u\n",i,j,k);
                counter++;
            }
        }
    }
    printf("符合条件的数字个数总计为:%d",counter);
}