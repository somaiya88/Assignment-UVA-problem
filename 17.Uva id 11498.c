
#include<stdio.h>
int main()
{
    int n,a,b,x,y;
    while(scanf("%d",&n)==1 && n)
    {
        scanf("%d%d",&x,&y);
        while(n--)
        {
            scanf("%d%d",&a,&b);
            if(x==a || y==b)
                printf("divisa\n");
            else if(a>x && b>y)
                printf("NE\n");
            else if(a<x && b>y)
                printf("NO\n");
            else if(a<x && b<y)
                printf("SO\n");
            else if(a>x && b<y)
                printf("SE\n");

        }
    }
    return 0;
}
