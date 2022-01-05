/*变长数组的拷贝以及打印*/
#include <stdio.h>
void copy(int n,int m,double str1[n][m],const double str2[n][m]);
void show(int n,int m,const double str[n][m]);
int main(void)
{
    int n=3;
    int m=5;
    double str1[n][m],str2[][5]={{1.1,3.3,5.5,7.7,9.9},
                                 {2.2,4.4,6.6,8.8,10.10},
                                 {1.2,2.3,3.4,4.5,5.6},};
    copy(n,m,str1,str2); //赋值给变长数组
    show(n,m,str1); //打印数组
    return 0;
}

//str2为原数组
void copy(int n,int m,double str1[n][m],const double str2[n][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            str1[i][j]=str2[i][j];
        }
    }
}

void show(int n,int m,const double str[n][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%lf ",str[i][j]);
        }
        printf("\n");
    }
}