#include <stdio.h>

int main()
{
    int n, number;
    int positive_sum = 0;
    int negative_sum = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number > 0)
        {
            positive_sum = positive_sum + number;
        }
        else if (number < 0)
        {
            negative_sum = negative_sum + number;
        }
    }

    printf("Sum of positive numbers = %d\n", positive_sum);
    printf("Sum of negative numbers = %d", negative_sum);

    return 0;
}
