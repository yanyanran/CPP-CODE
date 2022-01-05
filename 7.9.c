/*接受一个数，打印小于或等于它的素数*/
#include <stdio.h>
int main()
{
    int numb;
    do
    {
        printf("输入一个正整数：\n");
        scanf("%d",&numb);

        for(int i=numb;i>1;i--)
        { 
            int flag=1;
            for(int j=2;j<=i/2;j++) //直接对半分为两个区间相除比较
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
            }
                    if(flag==1)
                    {
                        printf("%d, ",i);
                    }
        }
        printf("\n");
    }while(numb!=0);

    printf("bye!");
    return 0;
}