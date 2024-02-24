#include<stdio.h>
int main()
{
    int a,b,t,i,sum=0;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&a,&b);
        int j;
        for(j=a; j<=b; j++)
        {
            if(j%2==1)
                sum=sum+j;
        }
        printf("Case %d: %d\n",i,sum);
        sum=0;
    }
    return 0;
}
