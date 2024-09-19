#include <unistd.h>
#include <stdio.h>

void    replace_letter(char c)
{
    char result;

    if (c >= 'a' && c <= 'z')
    {
        if (c + 13 > 'z')
            result = c - 13;
        else
            result = c + 13;
    }
    else if (c >= 'A' && c <= 'Z')
    {
        if (c + 13 > 'Z')
            result = c - 13;
        else
            result = c + 13;
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
            replace_letter(argv[1][i]);
            i++;
        }
    }
    write(1, "\n", 1);
}
