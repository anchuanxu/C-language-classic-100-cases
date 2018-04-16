//题目要求:输入三个整数,X,Y,Z,请把这三个数由小到大输出.
//程序分析:对三个数字排序,比较笨拙的方法是逐个进行比较,交换.快速的排序方法适合大型的排序
//程序延伸，多个数字进行排序处理．
#include <stdio.h>
#include <assert.h>

int bubble_sort_formsamlltobig(int *arr,int size)//实现从小到大
{
    int i = 0;
    int j = 0;
    assert(arr);//定义一个数组;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int  bubble_sort_formbigtosmall(int *arr,int size)//实现从大到小
{
    int i = 0;
    int j = 0;
    assert(arr);//定义一个数组;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    /*int x,y,z,t;
    printf("please input three numbers:\n");
    scanf("%d%d%d",&x,&y,&z);
    if (x>y){
        t = x;
        x = y;
        y = t;
    }
    if (x>z){
        t = x;
        x = z;
        z = t;

    }
    if (y>z){
        t = y;
        y = z;
        z = t;

    }
    printf("从小到大排序结果为:%d %d %d\n",x,y,z);
    return 0;//不采用冒泡排序方法的原始方法求解*/
    int k,n;
    printf("how many numbers you want input to sort? n=:\n");
    scanf("%d",&n);
    int arr[n];
    printf("please input %d bumbers\n",n);
    for(k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    printf("从大到小的输出为如下:\n");
    bubble_sort_formbigtosmall(arr,n);
    for(k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    printf("\n");
    printf("从小到大的输出为如下:\n");
    bubble_sort_formsamlltobig(arr,n);
    for(k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
}