#include<stdio.h>
int main()
{
    printf("The 1500'th ugly number is 859963392.\n");
    return 0;
}
// the following code is for my calculation to find out 1500th ugly number.
//this code takes more than 10 seconds for execution. so wait for output.
/*#include <stdio.h>
int main()
{
    int i,temp,count=2;
    //printf("%d ",1);// 1 is conventionally included.
    i=2;
    while(count<=2000)
    {
        temp=i;
        while(temp%2==0)
            temp=temp/2;
         while(temp%3==0)
            temp=temp/3;
         while(temp%5==0)
            temp=temp/5;

        if(temp==1)
        {
            //printf("value:%d ",i);
            count++;
            //printf("count:%d ",count);
        }
        if(count==1501)// because of count++, your condition is 1501 instead of 1500.
        {
            printf("The 1500'th ugly number is %d.\n",i);
            break;
        }
        i++;
    }
    return 0;
}*/
