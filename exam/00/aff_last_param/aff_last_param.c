

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int index;
	int count;

	index = 0;
	count = argc - 1;
	if(argc > 1)
	{
		while(argv[count][index] != '\0')
		{
			ft_putchar(argv[count][index]);
			index++;
		}
	}
	ft_putchar('\n');
	return(0);
}