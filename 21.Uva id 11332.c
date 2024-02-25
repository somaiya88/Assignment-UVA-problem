
#include<stdio.h>
int main()
{
    long long int n;
    int rem,sum;
    while(scanf("%llu",&n)==1 && n)
    {
iterator:
        sum=0;
        while(n!=0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        if(sum==0||sum==1||sum==2||sum==3||sum==4||sum==5||sum==6||sum==7||sum==8||sum==9)
        {
            printf("%u\n",sum);
        }
        else
        {
            n=sum;
            goto iterator;
        }
    }
    return 0;
}
