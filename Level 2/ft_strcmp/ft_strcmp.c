int    ft_strcmp(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while(s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] -s2[i]);
}

//#include <stdio.h>
//#include <unistd.h>

//int main(void)
//{
//    char *s1 = "Hello";
//    char *s2 = "Hell";
//    printf("%d\n", ft_strcmp(s1, s2));
//    return (0);
//}