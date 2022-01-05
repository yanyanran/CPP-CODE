/*指定输出je行ie列*/
#include <stdio.h>
void chline(char che,int ie,int je);
int main(void)
{
    char ch;
    int i,j;
    scanf("%c",&ch);
    scanf("%d %d",&i,&j);
    chline(ch,i,j);
    return 0;
}

void chline(char che,int ie,int je)
{
    for(int a=0;a<je;a++)
    {
        for(int b=0;b<ie;b++)
        {
            printf("%c",che);
        }
        printf("\n");
    }
}