#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
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
		int lenght;
		int index;

		lenght = ft_strlen(argv[1]);
		index = lenght -1;
		while(index >= 0)
		{
			ft_putchar(argv[1][index]);
			index--;
		}
	}
	ft_putchar('\n');
	return(0);
}