#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_a(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		if(str[index] == 'a')
		{
			ft_putchar('a');
			return;
		}
		index++;
	}
}

void	main(int argc, char **argv)
{
	if(argc != 2)
	{
		ft_putchar('\n');
		return;
	}

	if(argc == 2)
	{
		int index;

		index = 0;
		while(argv[1][index] != '\0')
		{
			if(argv[1][index] == 'a')
			{
				ft_putchar('a');
				ft_putchar('\n');
				return;
			}
			index++;
		}
	}
	ft_putchar('\n');
}