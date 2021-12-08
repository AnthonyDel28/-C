#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	uppercase(char lettre)
{	
	if(lettre >= 'a' && lettre <= 'z')
		lettre = lettre - 32;
	return(lettre);
}

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		if(str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		if(str[index-1] == ' ' || str[index-1] == '\t' || str[index-1] == '+' || str[index-1] == '-')
			str[index] = uppercase(str[index]);
		index++;
	}
	return(str);
}

int	main()
{
	char	str[] = "   salut, comment tu vas ? 42 mots quarante-deux; cinquante + et +un\n";
	ft_putstr(ft_strcapitalize(str));
	return(0);
}