#include <stdio.h>
#include "libft.h"

int main(void)
{
    char str[] = "hello";
    char c = '/';
   printf("%s", ft_memset(str, c, 5));
}