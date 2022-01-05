/*阶梯逆序打印六个大写字母*/
#include <stdio.h>
int main()
{
    char c;
    for(int i=1;i<=6;i++)
    {
        for(int j=0,c='F';j<i;j++,c--)
        {
            printf("%c",c);
        }
        printf("\n");
    }
}