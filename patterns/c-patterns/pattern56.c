// Pattern 56: ...

// 54321
//  ****
//   321
//    **
//     1

#include <stdio.h>

int main()
{
    int i, j;
    int n = 5;

    for (i = n; i >= 1; i--)
    {
        for (j = n; j >= 1; j--)
        {
            if (i >= j)
            {
                if (i % 2 == 0)
                    printf("*");
                else
                    printf("%d", j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}