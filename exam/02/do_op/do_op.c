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

int	main(int argc, char **argv)
{
	if(argc == 4)
	{
		int result;

		result = 0;
		if(argv[2] = '+')
			result = argv[1] + argv[3];
		if(argv[2] = '-')
			result = argv[1] - argv[3];
		if(argv[2] = '*')
			result = argv[1] * argv[3];
		if(argv[2] = '/')
			result = argv[1] / argv[3];
		if(argv[2] = '%')
			result = argv[1] % argv[3];
		ft_putnbr(result);
	}
	ft_putchar('\n');
	return(0);
}