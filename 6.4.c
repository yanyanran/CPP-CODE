#include <stdio.h>
int main()
{
    char c='A';
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=0;j<i;j++,c++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
}