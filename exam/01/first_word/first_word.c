#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		int index;

		index = 0;
		while(argv[1][index] == ' ' || argv[1][index] == '\t')
			index++;
		while(argv[1][index] != ' ' && argv[1][index] != '\t' && argv[1][index] != '\0')
		{
				ft_putchar(argv[1][index]);
				index++;
		}
	}
	ft_putchar('\n');
	return(0);
}