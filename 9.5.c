#include <stdio.h>
void largeof(double*x,double*y); 
//函数需要修改主函数的值，所以需要用指针作为参数哈
int main()
{
    double m,n;
    printf("输入两个值：\n");
    scanf("%lf %lf",&m,&n);
    largeof(&m,&n); //传参传地址
    printf("对比后我们得出两个值为%lf,%lf",m,n);
    return 0;
}

void largeof(double*x,double*y)
{
    if(*x>*y)
    {
        *y=*x;
    }else 
    {
        *x=*y;
    }
}