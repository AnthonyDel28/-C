#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_swap(int *ptr1, int *ptr2)
{
  int tmp;

  tmp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = tmp;
}

int main()
{
  
  int i = '8';
  int j = '3';
  int *ptr1 = &i;
  int *ptr2 = &j;

  ft_swap(ptr1, ptr2);

  ft_putchar(i);
  ft_putchar('\n');
  ft_putchar(j);
  ft_putchar('\n');
  
  return (0);
}