#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int lowerCamelCase(char c)
{

}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 0)
    {
        while(argv[1][i])
        {
            if(argv[1][i] == '_')
            {
                lowerCamelCase(argv[1][i]);
            }
            else
            {
                ft_putchar(argv[1][i]);
            }
        }
    }
}





















// A snake_case string is a string where each word is in lower case, separated by
// an underscore "_".

// A lowerCamelCase string is a string where each word begins with a capital letter
// except for the first one.

// Examples:
// $>./camel_to_snake "here_is_a_snake_case_word"
// hereIsASnakeCaseWord
// $>./camel_to_snake "hello_world" | cat -e
// helloWorld$
// $>./camel_to_snake | cat -e
// $