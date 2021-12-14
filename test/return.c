#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
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

int	back_up(void)
{
	int a;
	a = 15;
	if(a > 10)
		return(-123456);
}

int	main()
{
	int b;

	b = back_up();
	ft_putnbr(b);
	return(0);
}