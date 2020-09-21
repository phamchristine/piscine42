/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:30:58 by chpham            #+#    #+#             */
/*   Updated: 2020/09/21 13:50:56 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
		{
			i++;
			return (0);
		}
	}
	return (1);
}

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		ft_putnbr(INT_MIN / 10);
		ft_putchar(-(INT_MIN % 10) + '0');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(void)
{
	char	*a = "";
	char	*b = "0123456789";
	char	*c = "01234r56789";

	ft_putstr("Empty string: ");
	ft_putnbr(ft_str_is_numeric(a));
	write(1, "\n", 1);
	ft_putstr("Numeric string: ");
	ft_putnbr(ft_str_is_numeric(b));
	write(1, "\n", 1);
	ft_putstr("Not numeric string: ");
	ft_putnbr(ft_str_is_numeric(c));
	write(1, "\n", 1);
	return (0);
}


