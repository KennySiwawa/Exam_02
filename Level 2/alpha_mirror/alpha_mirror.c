#include <unistd.h>

void    alpha_mirror(char c)
{
    char    result;

    if (c >= 'a' && c <= 'z')
    {
        if ('m' - c >= 0)
        {
            result = 'n' + ('m' - c);
        }
        else
        {
            result = 'm' - (c - 'n');
        }
    }
    else if (c >= 'A' && c <= 'Z')
    {
        if ('M' - c >= 0)
        {
            result = 'N' + ('M' - c);
        }
        else
        {
            result = 'M' - (c - 'N');
        }
    }
    else
    {
        result = c;
    }
    write(1, &result, 1);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            alpha_mirror(argv[1][i]);
            i++;
        }
        write(1, "\n", 1);
    }
}
