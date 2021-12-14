#include <unistd.h>
#include <stdio.h>

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

int	main()
{
	int a;
	int *ptr;

	ptr = &a;
	a = 5;
	printf("a = %d, et son adresse vaut: %p\n", a, &a);
	printf("Adresse du pointeur : %p\n", ptr);
	*ptr = 8995;
	printf("La valeur stockée à l'adresse %p est %d\n", ptr, *ptr);
	return(0);
}