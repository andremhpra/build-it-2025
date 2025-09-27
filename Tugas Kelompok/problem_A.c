#include <stdio.h>

int main()
{
    float time, distance;
    scanf("%d", distance);
    scanf("%d", time);

    float speed_required = distance / time;
    printf("%.3f", speed_required);

    return 0;
}
