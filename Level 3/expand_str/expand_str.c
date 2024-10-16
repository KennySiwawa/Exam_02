#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int flag;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] <= 32)
        {
            i = i + 1;
        }
        while (argv[1][i])
        {
            if (argv[1][i] <= 32)
                flag = 1;
            if (!(argv[1][i] <= 32))
            {
                if (flag)
                    write(1, " ", 1);
                flag = 0;
                write(1, &argv[1][i], 1);
            }
            i = i + 1;
        }
    }
    write(1, "\n", 1);
    return (0);
}
