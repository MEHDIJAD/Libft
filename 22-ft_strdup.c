#include "libft.h"

 char *ft_strdup(const char *s)
 {
    int i;
    char *cpy;

    cpy = malloc(sizeof(char) * ft_strlen((char *)s) + 1);
    if (!cpy){
        return (NULL);
    }
    i = 0;
    while (s[i])
    {
        cpy[i] = s[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);


    

    


 }

