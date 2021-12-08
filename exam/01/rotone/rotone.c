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
			if((argv[1][index] >= 'a' && argv[1][index] <= 'z') || (argv[1][index] >= 'A' && argv[1][index] <= 'Z'))
			{
				if(argv[1][index] == 'z') 
					ft_putchar('a');
				else if(argv[1][index] == 'Z')
					ft_putchar('A');
				else
					argv[1][index] = argv[1][index] + 1;
			}
			ft_putchar(argv[1][index]);
			index++;
		}
	}
	ft_putchar('\n');
	return(0);
}