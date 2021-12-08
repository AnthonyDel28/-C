#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int index;

	index = 0;
	if(argc > 1)
	{
		while(argv[1][index] != '\0')
		{
			ft_putchar(argv[1][index]);
			index++;
		}
	}
	ft_putchar('\n');
	return(0);
}