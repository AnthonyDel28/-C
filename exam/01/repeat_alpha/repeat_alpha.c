#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int index;
	int stack;

	index = 0;
	stack = 0;
	if(argc == 2)
	{
		while(argv[1][index] != '\0')
		{
			if(argv[1][index] >= 'A' && argv[1][index] <= 'Z')
				stack = argv[1][index] - 64;
			else if(argv[1][index] >= 'a' && argv[1][index] <= 'z')
				stack = argv[1][index] - 96;
			while(stack > 0)
			{
				ft_putchar(argv[1][index]);
				stack--;
			}
			index++;
		}
	}
	ft_putchar('\n');
	return(0);
}