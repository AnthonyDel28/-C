#include <unistd.h>

void	repeat(int x, int y);
void	roof(int x, int y);

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	repeat(int x, int y)
{
	int a;

	a = 1;
	while(a <= y)
	{
		roof(x, y);
		ft_putchar('\n');
		a++;
	}
	ft_putchar('\n');
}

void	roof(int x, int y)
{
	int a;
	x = 12;
	a = 1;
	while(a <= x && x <= 16)
	{
		if(a == 1)
			ft_putchar('/');
		else if(a == x)
			ft_putchar('\\');
		else if(a == (x / 2 + 1))
			ft_putchar(':');
		else
			ft_putchar('=');
		a++;
		x = x + 1;
	}
}

int	main()
{
	repeat(18, 3);
	return(0);
}