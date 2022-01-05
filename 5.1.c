#include<stdio.h>
#define H 60
int main ()
{
    int time=1,hour,min;
    while(time>0)
    {
        scanf("%d",&time);
        if(time<H)
        {
            printf("%d",time);
        }else {
            hour = time/H;
            min = time%H;
            printf("%d minutes=%d hours and %d minutes",time,hour,min);
        }
    }
    return 0;
}