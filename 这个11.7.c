/*
  自定义strncpy（s1,s2,n）:
  把s2中的n个字符复制到s1当中，并且截断s2或在s2末尾加空字符。
  如果s2长度是n或大于n，目标字符串就不能以空字符结尾，函数返回s1
*/
#include<stdio.h>
#include <string.h>
#define N 50
char* mystrncpy(char *str,char*strr,int n);
int main()
{
    char str1[N],str2[N];
    int i=0;

    printf("请输入字符串：\n");
    fgets(str2,N,stdin);
    printf("输入你需要复制的字符数字：\n");
    scanf("%d",&i);

    while(*str2 != '\n')
    {
        mystrncpy(str1,str2,i);
        printf("经过复制后您得到的内容为：\n");
        puts(str1);
    
        while(getchar()!='\n') break;

        printf("请输入字符串：\n");
        fgets(str2,N,stdin);
        printf("输入你需要复制的字符数字：\n");
        scanf("%d",&i);
    };
    return 0;
}

char* mystrncpy(char *str,char*strr,int n)
{
    int count=0;

    while(*strr !='\0'&& count<n) //当原字符串不为空且<n时，复制
    {
        *(str+count++)=*strr++;
    }

    if(count<n) //当原字符串的长度<n时，填补空白
    {
        while(count<n)
        {
            *(str+count++) = '\0';
        }
    }
    return str;
}