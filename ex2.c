#include <stdio.h>

#define S '@'

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("%c", S);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("%c", S);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                printf("%c", S);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
            {
                printf("-");
            }
            else if (j == i)
            {
                printf("%c", S);
            }
            else
            {
                printf("+");
            }
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        int last = i;
        if (n - 1 - i > last)
        {
            last = n - 1 - i;
        }

        for (int j = 0; j <= last; j++)
        {
            if (j == i || j == n - 1 - i)
            {
                printf("%c", S);
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
