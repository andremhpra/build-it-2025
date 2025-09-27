#include <stdio.h>

int main()
{
    int min, max;
    scanf("%d", &min);
    scanf("%d", &max);

    int terms_amount = max - min + 1;
    int sum = (terms_amount * (min + max)) / 2;
    printf("%d", sum);
}