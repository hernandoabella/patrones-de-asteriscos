// Pattern 64: ...

// 0
// 1*
// 2**
// 3***
// 4****
// 5*****

#include <stdio.h>

int main()
{
    int i, j;
    int n = 5;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j != 0)
                printf("*");
            else
                printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}