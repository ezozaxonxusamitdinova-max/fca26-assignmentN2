#include <stdio.h>

#define L 5
#define P 4

#define R (L + 3)
#define C (P + 3)

int main(void)
{
    for (int row = 0; row < R; row++)
    {
        for (int col = 0; col < C; col++)
        {
            if (col > 0)
            {
                printf(" ");
            }
            printf("(%d,%d)", row, col);
        }
        printf("\n");
    }

    printf("\n");

    for (int row = 0; row < R; row++)
    {
        for (int col = 0; col < C; col++)
        {
            if (col > 0)
            {
                printf(" ");
            }
            printf("%d", row * C + col);
        }
        printf("\n");
    }

    return 0;
}
