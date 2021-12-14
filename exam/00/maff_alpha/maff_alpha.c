#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha(void)
{
	int lowercase;
	int uppercase;

	lowercase = 'a';
	uppercase = 'B';
	while(uppercase <= 'Z')
	{
		ft_putchar(lowercase);
		ft_putchar(uppercase);
		lowercase += 2;
		uppercase += 2;
	}
}

int	main(void)
{
	maff_alpha();
	ft_putchar('\n');
	return(0);
}