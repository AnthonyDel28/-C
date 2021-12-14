#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
		index++;
	return(index);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		int index;
		int index_reverse;

		index_reverse = ft_strlen(argv[1]);
		while(index_reverse > 0)
		{
			if(argv[1][index_reverse] == ' ' && argv[1][index_reverse + 1] >= 'a')
			{
				index = index_reverse + 1;
				while(argv[1][index] != '\0' && argv[1][index] != ' ')
				{
					ft_putchar(argv[1][index]);
					index++;
				}
				break;
			}
			index_reverse--;
		}
	}
	ft_putchar('\n');
	return(0);
}