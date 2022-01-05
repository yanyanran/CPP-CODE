/*将see you later转化为later you see*/
//直接使用字符数组argv[]
#include <stdio.h>
int main(int argc,char *argv[])
{
    if(argc<2)//判断命令行中参数个数，如果大于或等于2,则表示带参数
    {
        printf("错误！\n");
    }else
    {
        for(int i=argc;i>1;i--)
        {
            printf("%s ",argv[i-1]); /*argv[0]存储了程序的文件名
                                      因此需要逆序打印到argv[1]中*/
        }
        printf("\n");
    }
    return 0;
}LZdZ