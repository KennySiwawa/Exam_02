#include <unistd.h>

void	make_upper_lower(char c)
{
	char	result;
	
	if (c >= 'a' && c <= 'z')
	{
		result = c - 32;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		result = c + 32;
	}
	else
	{
		result = c;
	}
	write(1, &result, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{	
			make_upper_lower(argv[1][i]);
			i++;
		}
		write(1, "\n", 1);
	}
}
