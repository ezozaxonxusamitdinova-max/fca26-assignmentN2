#include <stdio.h>

#define L 5
#define S '@'

#define MAX_LENGTH (20 + L)

int main(void)
{
    int n;

    while (1)
    {
        printf("Input n: ");

        if (scanf("%d", &n) != 1 || n <= 0)
        {
            printf("Execution terminated.\n");
            break;
        }

        if (n > MAX_LENGTH)
        {
            printf("Too long!\n");
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                printf("%c", S);
            }
            printf("\n");
        }
    }

    return 0;
}
