#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}


void    camel_to_snake(char c)
{
    ft_putchar('_');
    c = c + 32;
    ft_putchar(c);
}


int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                camel_to_snake(argv[1][i]);
            }
            else
            {
                ft_putchar(argv[1][i]);
            }
            i++;
        }
        write(1, "\n", 1);
    }
}
