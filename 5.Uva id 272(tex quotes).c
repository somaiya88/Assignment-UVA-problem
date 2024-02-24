#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000];
    int i,j,n,l,temp=1;
    while(gets(a))
    {
        l=strlen(a);
        for(i=0; i<l; i++)
        {
            if(a[i]=='\"' && temp)
            {
                printf("``");
                temp=0;
            }
            else if(a[i]=='\"')
            {
                printf("''");
                temp=1;
            }
            else
            {
                printf("%c",a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
