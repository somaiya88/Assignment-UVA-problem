#include<stdio.h>
int main()
{
    int t,n,c,speed,count=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        speed=0;
        while(n--)
        {
            scanf("%d",&c);
            if(speed<c)
            speed=c;
        }
        printf("Case %d: %d\n",++count,speed);
    }
    return 0;
}
