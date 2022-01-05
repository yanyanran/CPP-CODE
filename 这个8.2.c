/*输出字符及其所对应的十进制ASCII码值*/
#include <stdio.h>
int main()
{
    int str=0;
    char ch;
    
    while((ch=getchar())!=EOF)
    {
        if(str++==10) 
        {
            printf("\n");
            str=1;
        } //计数器判断是否打印换行符（题目要求每行打印10对值）

        if(ch>='\040') //当输入字符大于空格字符为可显示字符
        {
            printf("'%c'是%3d",ch,ch); //可显示字符的ASCII转化
        }else if(ch =='\n')
        {
            printf("\\n是\\n\n"); //换行符的处理
            str=0;
        }else if(ch =='\t')
        {
            printf("\\t是\\t\t"); //制表符的处理
        }else
            printf("\'%c\'是^%c",ch,(ch+64)); //其他非显示字符的处理
    }
    return 0;
}