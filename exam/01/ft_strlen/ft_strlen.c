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
	int count;

	count = 0;
	while(str[count] != '\0')
		count++;
	return(count);
}

int	main()
{
	char str[] = "Bonjour les amis!";
	ft_putnbr(ft_strlen(str));
	ft_putchar('\n');
	return(0);
}