#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long int n)
{
	if(n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if(n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int	main()
{
	ft_putnbr(58521584848);
	return(0);
}