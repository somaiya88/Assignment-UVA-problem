
#include<stdio.h>
#include<string.h>
int main()
{
    int A[64],c;
    int n, i, j, m;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &m);
        for(i = 0; i < m; ++i)
            scanf("%d", &A[i]);
        for(i=c=0; i < m - 1; ++i)
        {
            for(j = i + 1; j < m; ++j)
            {
                if(A[i] > A[j])
                    ++c;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", c);
    }
    return 0;
}
