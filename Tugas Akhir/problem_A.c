/*
    ( ͡° ͜ʖ ͡°)b
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    int highest_spent = 0;
    int highest_spent_count = 0;
    int highest_spent_days[1000];

    for (int day = 0; day < n; day++)
    {
        int spent;
        scanf("%d", &spent);

        if (spent == highest_spent)
        {
            highest_spent_days[highest_spent_count++] = day;
        }
        else if (spent > highest_spent)
        {
            highest_spent = spent;
            highest_spent_count = 0;
            highest_spent_days[highest_spent_count++] = day;
        }

        sum += spent;
    }

    printf("Max : %d\n", highest_spent);
    printf("Count : %d\n", highest_spent_count);
    printf("days : ");
    for (int i = 0; i < highest_spent_count; i++)
    {
        if (i == highest_spent_count - 1)
        {
            printf("%d\n", highest_spent_days[i] + 1);
        }
        else
        {
            printf("%d ", highest_spent_days[i] + 1);
        }
    }

    float percentage = (highest_spent * (float)highest_spent_count) / sum * 100;
    printf("Percentage : %.3f%%\n", percentage);

    return 0;
}
