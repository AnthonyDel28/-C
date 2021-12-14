#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	main()
{
	char str[] = "Salut les amis !";
	ft_putstr(str);
	ft_putchar('\n');
	return(0);
}