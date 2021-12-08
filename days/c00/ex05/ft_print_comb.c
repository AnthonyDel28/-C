#include <unistd.h>

void	print_space(void);

void	ft_print_comb(void)
{
	int a = '0';
	int b = '0';
	int c = '0';

	while(a <= '7')
	{
		b = a + 1;
		while(b <= '8')
		{
			c = b + 1;
			while(c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if(a != '7')
					print_space();
				c++;
			}
			b++;
		}
		a++;
	}
	write(1, "\n", 1);
}

void	print_space(void)
{
	write(1, ",", 1);
	write(1, " ", 1);
}
