#include <stdio.h>
double sum(double A);
int main (int argc,char *argv[])
{
    double A;
    printf("输入一个double类型的数：\n");
    scanf("%lf",&A);
    sum(A);
    return 0;
}

double sum(double A)
{
    double t = A*A*A;
    printf("它的三次方为%lf",t);
    return t;
}