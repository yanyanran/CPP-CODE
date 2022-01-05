/*两数组之间的内容拷贝*/
#include <stdio.h>
void str1(double t[],double s[],int n);
void str2(double *t,double *s,int n);
void str3(double *t,double *sfirst,double *slast);

int main()
{
    double AND[5]={1.1,2.2,3.3,4.4,5.5};
    double B[5];
    double C[5];
    double D[5];

    copy1(B,AND,5);
    copy2(C,AND,5);
    copy3(D,AND,AND+5);

    return 0;
}

//t为目标数组，s为原数组
void str1(double t[],double s[],int n)
{
    for(int i=0;i<n;i++)
    {
        t[i]=s[i];  //数组表示法拷贝
    }
}

void str2(double *t,double *s,int n)
{
    for(int i=0;i<n;i++)
    {
        *(t+i)=*(s+i); //指针表示法拷贝
    }
}

void str3(double *t,double *sfirst,double *slast)
{
    for(int i=0;(slast-sfirst)>i;i++)
    {

        *(t+i)=*(sfirst+i); //使用首尾两个指针表示
    }
}