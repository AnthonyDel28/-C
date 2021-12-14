#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int a;

	a = 0;
	while(str[a] != '\0')
		a++;
	ft_putchar(a + '0');
}

int	main()
{
	ft_strlen("Bonjour");
	return(0);
}