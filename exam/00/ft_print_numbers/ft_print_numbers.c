#include <unistd.h>

void	ft_print_numbers(void)
{
	int index;

	index = '0';
	while(index <= '9')
	{
		write(1, &index, 1);
		index++;
	}
	write(1, "\n", 1);
}

int	main()
{
	ft_print_numbers();
	return(0);
}