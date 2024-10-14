#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    char *dest;

    if (src == 0)
        return (0);
    while (src[len])
        len++;
    dest = (char *)malloc(sizeof(char) * (len + 1)); 
    if (dest == 0)
        return(0);
    while (i <= len)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
