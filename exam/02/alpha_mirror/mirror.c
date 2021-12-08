#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	alpha_mirror(char *str)
{
	int index;
	int lettre;

	index = 0;
	while(str[index] != '\0')
	{
		if(str[index] >= 'a' && str[index] <= 'm')
		{
			lettre = (str[index] + 25) - ((str[index] - 97) * 2);
			ft_putchar(lettre);
		}
		if(str[index] >= 'n' && str[index] <= 'z')
		{
			lettre = (str[index] + 25) + ((str[index] - 97) * 2);
			ft_putchar(lettre);
		}
		else
			ft_putchar(str[index]);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	ft_putchar('\n');
	return(0);
}