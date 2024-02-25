#include<stdio.h>
int main()
{
    int t,i;
    scanf("%u",&t);
    i=1;
    while(i<=t)
    {
        long long int a,b,c,temp=0;
        int j,t,f;
        scanf("%u",&f);
        for(j=1; j<=f; j++)
        {
            scanf("%llu%llu%llu",&a,&b,&c);
            temp=temp+(a*c);
        }
        printf("%llu\n",temp);
        temp=0;
        i++;
    }
    return 0;
}
