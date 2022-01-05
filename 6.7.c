#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
    int i;
    char a[N];
    printf("请输入一个单词：\n");
    scanf("%s",a);
    for(i =strlen(a);i>=0;i--)
    {
        printf("%c",a[i]);
    }
}
/*字符串逆过来*/