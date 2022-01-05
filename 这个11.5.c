/*
  设计一个函数，搜索第一个函数中形参指定的字符串，
  并在其中查找第2个函数的形参指定的字符首次出现的
  位置。成功函数返回指向该字符的指针；没找到返回空
  指针。在一个完整的函数中测试该函数，使用一个循环
  给函数提供输入值。
*/

#include <stdio.h>
#define N 50
char* CHAR(char*st,char c);

int main(int argc,char *argv[])
{
    char A[N];
    char niu;
    char *str;

    printf("请输入字符串：\n");
    fgets(A,N,stdin); //读入待检索的字符串

    while(niu!=EOF)
    {
        printf("输入你想查找的字符：\n");
        while((niu==getchar())=='\n') //读入目标字符niu并且删除多余换行符
        {
             continue;
        }

        if((str = CHAR(A,niu))!=NULL) //调用函数
        {
            printf("字符%c的地址是%p\n",*str,str);
        }else
            printf("字符%c未找到\n",niu);
    }
    return 0;
}

char* CHAR(char*st,char c)
{
    while(*st != '\0') //判断是否到达字符串结尾
    {
        if(*st == c)
        {
            return st; //匹配返回i当前指针
        }else st++; //否则判断下一个字符
    }
    return NULL; //全都不匹配返回空指针
}