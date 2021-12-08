#include <unistd.h>
#include <stdio.h>
#include <string.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{

}

int main(void)
{

}