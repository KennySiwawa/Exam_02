#include <unistd.h>

void    camel_to_snake(char c)
{
    char    result;

    if (c >= 'A' && c <= 'Z')
    {
        result = c + 32;
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
            camel_to_snake(argv[1][i]);
            i++;
        }
        write(1, "\n", 1);
    }

}