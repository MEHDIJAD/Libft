#include <stdio.h>

int ft_atoi(const char *nptr)
{
    int i = 0;
    int signe = 1;
    int number = 0;

    // Skip whitespace characters
    while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
        i++;

    // Handle the sign, only consider the first one
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            signe = -1;
        i++;
    }

    // Convert the number part
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        number = (number * 10) + (nptr[i] - '0');
        i++;
    }

    return number * signe;
}
