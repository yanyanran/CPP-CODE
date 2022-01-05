/*自定义两个函数*/
/*第一个函数读取字符，判读是否为字母。如果是，报出字母的位置（大小写相同位置）*/
/*第二个函数以一个字符为参数。如果是字母就返回位置；否则返回-1*/
#include <stdio.h>
int SERCH(char a);
void PUTIN(void);

int main()
{
    PUTIN();
}

void PUTIN(void) //第一个函数
{
    char c;
    printf("输入一个字符：\n");
    while((c=getchar())!=EOF)
    {
        if(c=='\n')
            continue;
        if(SERCH(c)!=-1)
        {
            printf("字符%c是字母，它的位置是%d\n",c,SERCH(c));
        }else printf("字符%c不是字母\n",c);
    }
}

int SERCH(char a) //第二个函数
{
    if('A'<=a && a<='Z')
    {
        return a-'A'+1;
    }else if('a'<=a && a<='z')
    {
        return a-'a'+1;
    }else{
        return -1;
    }
}