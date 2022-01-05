/*统计到文件结束前读取的字符数*/
#include <stdio.h>
int main()
{
    int str=0;
    char ch;

    while((ch=getchar())!=EOF)
    {
        str++;
    }
    printf("读取到的字符数为:%d\n",str);
    return 0;
}