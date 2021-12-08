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
		while(argv[1][index] != '\0')
		{
			if(argv[1][index] >= 'a' && argv[1][index] <= 'z')
			{
				argv[1][index] = argv[1][index] - 32;
			}
			else if(argv[1][index] >= 'A' && argv[1][index <= 'Z'])
			{
				argv[1][index] = argv[1][index] + 32;
			}
			ft_putchar(argv[1][index]);
			index++;
		}
	}
	ft_putchar('\n');
	return(0);
}
