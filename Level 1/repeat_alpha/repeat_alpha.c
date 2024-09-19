#include <unistd.h>
#include <stdio.h>

void	repeat_alpha(char c)
{
	int	repetitions;
	int	i;

	repetitions = 1;
	i = 0;
	if (c >= 'a' && c <= 'z')
	{
		repetitions = c - 'a' + 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		repetitions = c - 'A' + 1;
	}
	while (i < repetitions)
	{
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			repeat_alpha(argv[1][i]);
			i++;
		}
	}
}