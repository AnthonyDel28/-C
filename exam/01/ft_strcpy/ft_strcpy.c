#include <stdio.h>
#include <unistd.h>

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

char 	*ft_strcpy(char *s1, char *s2)
{
	int index;

	index = 0;
	while(s1[index] != '\0')
	{
		s2[index] = s1[index];
		index++;
	}
	if(s1[index] == '\0')
		s2[index] = '\0';
}

int	main()
{
	char s1[] = "Bonjour comment tu vas?";
	char s2[] = "Bonjour comment-allez vous?";
	ft_strcpy(s1, s2);
	ft_putstr(s2);
	ft_putchar('\n');
	return(0);
}