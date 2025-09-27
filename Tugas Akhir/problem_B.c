/*
    ( ͡° ͜ʖ ͡°)b
*/
#include <stdio.h>

int main()
{
    int tree_height;
    scanf("%d", &tree_height);

    for (int i = 0; i < tree_height; i++)
    {
        int space_count;
        int star_count;
        if (i == 0 || i == tree_height - 1)
        {
            space_count = tree_height - 2;
            star_count = 1;
        }
        else
        {
            star_count = 1 + (2 * i);
            space_count = tree_height - (i + 2);
        }

        for (int i = 0; i < space_count; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < star_count; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}