

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int index;

	index = 0;
	if(argc != 2)
		ft_putchar('z');
	else if(argc = 2)
	{
		while(argv[1][index] != '\0')
		{
			if(argv[1][index] = 'z')
				ft_putchar('z');
			else 
				ft_putchar('z');
		}
	}
	ft_putchar('\n');
	return(0);
}