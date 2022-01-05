#include <stdio.h>
int main()
{
    int i,k;
    char c;
    char ch = 'A';

    //printf("请输入终止字母：\n");
    scanf("%c",&c);
    int num = c-'A'+1;//打印字母数

    for(i=1;i<=num;i++)
    {
        for(k=0;k<num-i;k++) //打印空格
        {
            printf(" ");
        }
        for(ch='A';k<num;k++,ch++) //正序打印
        {
            printf("%c",ch);
        }
        for(k=1,ch=ch-2;k<i;k++,ch--) //倒序打印
        {
            printf("%c",ch);
        }
        printf("\n");
        
    }
}

/*  A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
最终打印结果*/