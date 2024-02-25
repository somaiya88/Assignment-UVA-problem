
#include<stdio.h>
int main()
{
    int t,n,i,remainder;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        n=(((((n*567)/9)+7492)*235)/47)-498;
        i=1;
        while(i<=2)
        {
            remainder=n%10;
            n=n/10;
            i++;
        }
        if(remainder>0)
            printf("%d\n",remainder);
        else
            printf("%d\n",(remainder*(-1)));
        }
    return 0;
}
