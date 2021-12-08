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
		int second;

		index = 0;
		second = 0;
		while(argv[1][index] != '\0')
		{
			while(argv[2][second] != argv[1][index])
				second++;
			if(argv[2][second] == argv[1][index])
			{
				ft_putchar(argv[1][index]);
				index++;
			}
		}
	}
	ft_putchar('\n');
	return(0);
}