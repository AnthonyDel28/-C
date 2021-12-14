void	up(int x, int y);
void	inside(int x, int y);
void	and_down(int x, int y);
void	rush(int x, int y);
void	ft_putchar(char c);

void	up(int x, int y)
{
	int a;

	a = 1;
	while(a <= x)
	{
		if(a == 1 || a == x)
			ft_putchar('A');
		else if(a > 1 && a < x)
			ft_putchar('B');
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
			ft_putchar('B');
		else if(a > 1 && a < x)
			ft_putchar(' ');
		a++;
	}
}

void	and_down(int x, int y)
{
	int a;

	a = 1;
	while(a <= x)
	{
		if(a == 1 || a == x)
			ft_putchar('C');
		else if(a > 1 && a < x)
			ft_putchar('B');
		a++;
	}
}

void	rush(int x, int y)
{
	int a;
	a = 1;
	if(x <= 0 || y <= 0)
		return;
	while(a <= y)
	{
		if(a == 1)
			up(x, y);
		else if(a > 1 && a < y)
			inside(x, y);
		else if(a == y)
			and_down(x, y);
		a++;
		ft_putchar('\n');
	}
}