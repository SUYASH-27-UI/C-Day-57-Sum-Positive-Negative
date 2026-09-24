# C-Day-57-Sum-Positive-Negative
# C Day 57 - Sum of Positive and Negative Numbers

This program takes multiple numbers from the user and calculates the sum of positive and negative numbers separately.

## Example Input

```text
Enter how many numbers: 6
Enter number 1: 10
Enter number 2: -5
Enter number 3: 20
Enter number 4: -8
Enter number 5: 15
Enter number 6: 0
```

## Output

```text
Sum of positive numbers = 45
Sum of negative numbers = -13
```

## Concepts Used

* `for` loop
* `if-else if`
* `scanf()`
* `printf()`
* Comparison operators
* Addition
* Variables

## How It Works

1. The program asks how many numbers the user wants to enter.
2. A `for` loop takes the numbers one by one.
3. If the number is positive, it is added to `positive_sum`.
4. If the number is negative, it is added to `negative_sum`.
5. Zero is ignored.
6. Finally, both sums are displayed.

## C Code

```c
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
```

## Sample Output

```text
Enter how many numbers: 6
Enter number 1: 10
Enter number 2: -5
Enter number 3: 20
Enter number 4: -8
Enter number 5: 15
Enter number 6: 0

Sum of positive numbers = 45
Sum of negative numbers = -13
```

## Goal

The goal of this project is to practice loops, conditions, variables, and calculating separate sums in C.
