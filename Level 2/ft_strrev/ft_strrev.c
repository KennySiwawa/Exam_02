#include <unistd.h>

char    *ft_strrev(char *str)
{
    int i;
    int length;
    char    temp;

    i = -1;
    length = 0;
    while(str[length])
        length++;
    while(i < length / 2)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    return (str);
}
