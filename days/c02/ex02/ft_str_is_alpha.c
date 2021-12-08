#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	ft_str_is_alpha(char *str)
{
  int i;
  
  i = 0;
  while (str[i] != '\0')
  {
    if (((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z')))
      return(0);
    i++;
  }
  return(1);
}


int	main()
{
	char str[] = "ax0sssss58556";
	ft_putnbr(ft_str_is_alpha(str));
	return(0);
}

