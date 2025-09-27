/*
    :)
*/
#include <stdio.h>

int string_matches(const char *a, const char *b)
{
    while (*a != '\0' && (*a == *b))
    {
        a++;
        b++;
    }
    return *a == *b;
}

int main()
{
    char uniq_strs[300][71];

    char current_word[71];
    int uniq_str_count = 0;
    while (scanf("%70s", current_word) == 1)
    {
        if (uniq_str_count > 0)
        {
            int is_uniq = 1;
            for (int i = 0; i < uniq_str_count; i++)
            {
                if (string_matches(uniq_strs[i], current_word))
                {
                    is_uniq =
                        0;
                    break;
                }
            }
            if (!is_uniq)
                continue;
        }

        // insert to uniq_str to prevent of the same word in the future.
        for (int i = 0; i < 70; i++)
        {
            if (!current_word[i])
            {
                uniq_strs[uniq_str_count][i + 1] = '\0';
                break;
            }

            uniq_strs[uniq_str_count][i] = current_word[i];
        }
        uniq_str_count++;
    }

    // print.
    for (int i = 0; i < uniq_str_count; i++)
    {
        printf("%s ", uniq_strs[i]);
    }

    return 0;
}