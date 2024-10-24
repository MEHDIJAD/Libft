#include "libft.h"
#include <stdio.h>

int main(void)
{
    //char str[] = "hello";

	char src[] = "that";
	char dest[100] = "THIS AND THAT ";
	int i;

	//printf("%s", ft_memset(str, 'c', 3));
	//printf("%s", ft_bzero(str, 'c', 3));
	//printf("%s", ft_memcpy(dest, src, sizeof(char) * 3));

	//char buffer[20] = "Hello, World!";
    //ft_memmove(buffer, buffer + 7, 5);

    //printf("Result: %s\n", buffer);
	//ft_strlcpy(dest, src, 10);
	//size_t n = 
	//ft_strlcat(dest, src, 15);
	//printf("%s", dest);
	//i = 0;
	//while (i < strlen(dest))
    //{
	//	printf("%c",ft_tolower(dest[i]));
	//	i++;
	//}

	//const char *str = "Hello, world!";
	//const char *str1 = "Hello, world!";
    //char c = '\0';
    //char c1 = '\0';	// We are searching for the null terminator

    //char *result = ft_memchr(str, c, 14);
	//char *result1 = ft_memchr(str1, c1, 14);
    //printf("%s\n%s", result, result1);
	//const char *s1 = "Hello, Go, man";
	//const char *s2 = "Go";
	//char *r = strnstr(s1, s2, 15);
	//printf("%s", r);
	//printf("%d\n", ft_atoi(" -1234ab567"));
	//const char *str = "frhgthth";
	//char *cpy = ft_strdup(str); 
	//printf ("%s", cpy);

	size_t n, z;
	n = 10;
	z = sizeof(int);
	int *ptr = ft_calloc(n, z);
	printf("ptr[%d]\t ptr[%d]\t ptr[%d]", ptr[0], ptr[1], ptr[2]);

	
}

