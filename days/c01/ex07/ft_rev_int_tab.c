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
	int a;
	int b;
	int tmp;

	a = 0;
	b = size - 1;
	while(a < b)
	{
		tmp = tab[a];
		tab[a] = tab[b];
		tab[b] = tmp;
		a++;
		b--;
	}

}

int main()
{
	int size = 5;
	int tab[sizeof(size)];

	tab[0] = 3;
	tab[1] = 6;
	tab[2] = 9;
	tab[3] = 12;
	tab[4] = 15;

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