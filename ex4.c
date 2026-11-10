#include <stdio.h>

#define T 45

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 0;
    }

    int number = T;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if (col > 1)
            {
                printf(" ");
            }
            printf("%d", number);
            number++;
        }
        printf("\n");
    }

    return 0;
}
