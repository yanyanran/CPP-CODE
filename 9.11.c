/*输出斐波那契指定的各项数*/
#include<stdio.h>
void Feb(int j);
int main()
{
    int n;
    printf("请输入想要计算的值：\n");
    scanf("%d",&n);
    if(n>=2)
    {
        Feb(n);
    }
    return 0;
}

void Feb(int j)
{
    unsigned long a,b,sum;
    a=1;
    b=1;
    for(int i=0;i<j;i++)
    {
        printf("%lu ",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("\n");
}