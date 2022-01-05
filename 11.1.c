/*输出输入字符，包括换行符、空白格和制表符*/
#include <stdio.h>
#define N 10
char *readchar(char*str,int n);
int main()
{
    char A[N];
    readchar(A,N);
    printf("你输入的字符是：\n");
    puts(A);
    return 0;
}

char *readchar(char*str,int n)  //指针传参
{
    int i=0;
    do{
        str[i] = getchar();
    }while(str[i]!=EOF && ++i<n);
    return str;
}