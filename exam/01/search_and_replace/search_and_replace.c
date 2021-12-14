#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if(argc == 4)
	{
		int index;

		index = 0;
		while(argv[1][index] != '\0')
		{
			if(argv[1][index] == argv[2][0])
			{
				argv[1][index] = argv[3][0];
			}
			ft_putchar(argv[1][index]);
			index++;
		}
	}
	ft_putchar('\n');
	return(0);
}