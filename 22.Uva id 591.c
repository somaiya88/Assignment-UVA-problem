
#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,height,a[50],sum,move=0,count=0;
iterator:
    while(scanf("%d",&n)==1 && n)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sum=0;
        for(i=0; i<n; i++)
        {
            sum=sum+a[i];
        }
        height=0;
        height=sum/n;
        move=0;
        for(i=0; i<n; i++)
        {
            if(a[i]>height)
            {
                move=move+(a[i]-height);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",++count,move);
    }
    if(n)
        goto iterator;
    return 0;
}
