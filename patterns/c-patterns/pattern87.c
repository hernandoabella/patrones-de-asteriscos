// Pattern 87: ...

// *
// * *
// ABC
// * *
// *

#include <stdio.h>

int main()
{
    int n = 5;
    int i, j;
    int x = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= x; j++)
        {
            if (i != n / 2 + 1)
            {
                printf("* ");
            }
            else
            {
                printf("%c", 64 + j);
            }
        }
        if (i <= n / 2)
            x++;
        else
            x--;
        printf("\n");
    }
    return 0;
}