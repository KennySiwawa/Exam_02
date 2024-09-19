#include <unistd.h>

void    replace_with_next(char c)
{
    char replacement;

    if (c >='a' && c <= 'z')
    {
        if (c + 1 > 'z')
        {
            replacement = 'a';
        }
        else
        {
            replacement = c + 1;
        }
    }
    else if (c >='A' && c <= 'Z')
    {
           if (c + 1 > 'Z')
        {
            replacement = 'A';
        }
        else
        {
            replacement = c + 1;
        }
    }
    else
    {
        replacement = c;
    }
    write(1, &replacement, 1);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            replace_with_next(argv[1][i]);
            i++;
        }
    }
    write(1, "\n", 1);
}
