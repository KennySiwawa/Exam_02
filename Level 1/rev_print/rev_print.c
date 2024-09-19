#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char *rev_print(char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

//int main(void)
//{
//  rev_print("Hello world");
//  write (1, "\n", 1);
//  rev_print("tnirp esreveR");
//  write (1, "\n", 1);
//  rev_print("");
//  write (1, "\n", 1);
//}
