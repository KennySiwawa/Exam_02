#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] != ' ' && argv[1][i] != '\t' && 
                (i == 0 || argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t'))
            {
                j = i;
            }
            i++;
        }
        while(argv[1][j] && argv[1][j] != ' ' && argv[1][j] != '\t')
        {
            write(1, &argv[1][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
}
