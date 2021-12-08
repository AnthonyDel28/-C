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

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while(i < size)
	{
		j = i + 1;
		while(j < size)
		{
			if(tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	int size = 6;
	int tab[sizeof(size)];

	tab[0] = 8;
	tab[1] = 6;
	tab[2] = 4;
	tab[3] = 3;
	tab[4] = 5;
	tab[5] = -10;

	int a;
	a = 0;
	ft_rev_int_tab(tab, size);
	while(a < size)
	{
		ft_putnbr(tab[a]);
		if(a != size - 1)
			ft_putchar(',');
		a++;
	}
	write(1, "\n", 1);
}