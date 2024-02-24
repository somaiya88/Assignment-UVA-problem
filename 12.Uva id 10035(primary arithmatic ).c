#include<stdio.h>
int main()
{
    long long int a,b,count,carry;
    while(scanf("%llu%llu",&a,&b)==2)
    {
       if(a==0 && b==0)
         break;
       carry=0;
       count=0;
       while(a||b)
       {
          carry=((a%10)+(b%10)+carry)/10;
          a=a/10;
          b=b/10;
          count=count+carry;
       }
       if(count==0)
        printf("No carry operation.\n");
       else if(count==1)
        printf("1 carry operation.\n");
       else
        printf("%llu carry operations.\n",count);
    }
    return 0;
}
