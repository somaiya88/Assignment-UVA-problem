#include<stdio.h>
int main()
{
    long long int n,temp,sum;
    int i,t,rem,count;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        count=0;
iterator:
        temp=n;
        sum=0;
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum*10 + rem;
            temp=temp/10;
        }
        n=n+sum;
        temp=n;
        sum=0;
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum*10 + rem;
            temp=temp/10;
        }
        if(n!=sum)
        {
            count++;
            goto iterator;
        }
        else
        {
            count++;
            printf("%d %lld\n",count,n);
        }
    }
    return 0;
}
