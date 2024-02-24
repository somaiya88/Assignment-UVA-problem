#include<stdio.h>
int main()
{
    int i,t,a,b,c,count=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a<b && a>c)||(a<c && a>b))
        {
            count++;
            printf("Case %d: %d\n",count,a);
        }
        else if((b<a && b>c)||(b<c && b>a))
        {
            count++;
            printf("Case %d: %d\n",count,b);
        }
        else
        {
            count++;
            printf("Case %d: %d\n",count,c);
        }
    }
    return 0;
}
