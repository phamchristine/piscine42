#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char c = 'a';
	ft_putchar(c);
	return (0);
}
