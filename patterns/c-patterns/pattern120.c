// Pattern 120: ...

//   *
//   *
//  **
//  **
// ***
// ***

#include <stdio.h>

int main()
{
    int i, j, x, y;

    for (i = 1; i <= 3; i++)
    {
        for (x = 2; x > 0; x--)
        {
            for (y = 2; y >= i; y--)
            {
                printf(" ");
            }
            for (j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}