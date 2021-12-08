#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_rev_alpha(void)
{
	int lowercase;
	int uppercase;

	lowercase = 'z';
	uppercase = 'Y';
	while(uppercase >= 'A')
	{
		ft_putchar(lowercase);
		ft_putchar(uppercase);
		uppercase -= 2;
		lowercase -= 2; 
	}
}

int	main()
{
	maff_rev_alpha();
	ft_putchar('\n');
	return(0);
}