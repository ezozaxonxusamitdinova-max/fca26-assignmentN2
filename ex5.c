#include <stdio.h>

#define T 45

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 0;
    }

    int count = 0;

    for (int row = 1; count < n; row++)
    {
        for (int col = 1; col <= row && count < n; col++)
        {
            if (col > 1)
            {
                printf(" ");
            }
            printf("%d", T + count);
            count++;
        }
        printf("\n");
    }

    return 0;
}
