#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t blocksize;

    blocksize = nmemb * size;

    void    *ptr = malloc ( blocksize);
    if (!ptr){
        return (NULL);
    }
    ft_bzero(ptr, nmemb);
    return (ptr);
}