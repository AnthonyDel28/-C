#include <unistd.h>

void	ft_putchar(char c);
void	up_and_down(int x, int y);
void	inside(int x, int y);

void	up_and_down(int x, int y)
{
	int a;

	a = 1;
	while(a <= x)
	{
		if(a == 1 || a == x)
			ft_putchar('o');
		else if(a > 1 && a < x)
			ft_putchar('-');
		a++;
	}
}

void	inside(int x, int y)
{
	int a;

	a = 1;
	while(a <= x)
	{
		if(a == 1 || a == x)
			ft_putchar('|');
		else if(a > 1 && a < x)
			ft_putchar(' ');
		a++;
	}
}

void	rush(int x, int y)
{
	int a;
	a = 1;
	if(x == 0 || y == 0)
		return;
	while(a <= y)
	{
		if(a == 1 || a == y)
			up_and_down(x, y);
		else if(a > 1 && a < y)
			inside(x, y);
		a++;
		ft_putchar('\n');
	}
}