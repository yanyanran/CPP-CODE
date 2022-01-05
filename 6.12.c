//计算两个无限序列的总和
#include <stdio.h>
int main()
{
    int i,MAX;
    double sum=0.0;
    printf("输入最大项数：\n");
    scanf("%d",&MAX);
    
    while(MAX>0)
    {
    /*全为加号序列的累加*/
    for(i=1;i<=MAX;i++)
    {
        sum=sum+1.0/i;
    }
    printf("直到第%d项的总和为%lf\n",MAX,sum);
    sum=0.0;

    /*每隔一项为加号序列的累加*/
    for(i=1;i<=MAX;i++)
    {
        if(i%2==0)
        {
            sum=sum-1.0/i;
        }else {
            sum=sum+1.0/i;
        }
    }
    printf("直到第%d项的总和为%lf\n",MAX,sum);
    sum=0.0;

    /*计算两个序列的和，偶数项相抵消,只有奇数项累加*/
    for(i=1;i<=MAX;i++)
    {
        if(i%2!=0)
        {
            sum=sum+2*1.0/i;
        }
    }
    printf("直到第%d项两个序列的总和为%lf\n",MAX,sum);
    printf("输入最大项数：\n");
    scanf("%d",&MAX);
    }

}