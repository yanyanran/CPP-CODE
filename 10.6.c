/*数组元素数据倒序(从大到小)排列*/
#include <stdio.h>
void VER(double i[],int j);

int main()
{
    double B[5]={1.1,3.3,2.2,4.4,5.5};
    for(int j=0;j<5;j++)
    {
        printf("%lf",B[j]);
    }
    printf("\n");
    VER(B,5);
    for(int j=0;j<5;j++)
    {
        printf("%lf",B[j]);
    }
    return 0;
}

void VER(double i[],int j)
{
    double str;
    for(int m=0;m<j-1;m++)
    {
        for(int n=0;n<j-1-m;n++) /*要减掉m的原因是每次循环都能保证一个元素到达正确位置
                                   可以提高效率减少不必要的循环*/
        {
            if(i[n]<i[n+1])
            {
                str=i[n];
                i[n]=i[n+1];
                i[n+1]=str;
            }
        }
    }
}