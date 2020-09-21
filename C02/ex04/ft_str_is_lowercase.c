/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:54:13 by chpham            #+#    #+#             */
/*   Updated: 2020/09/21 13:52:24 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char	*b = "abcdefghijklmnopqrstuvwxyz";
	char	*c = "abcdefghijklMmnopqrstuvwxyz";

	ft_putstr("Empty string: ");
	ft_putnbr(ft_str_is_lowercase(a));
	write(1, "\n", 1);
	ft_putstr("Lowercase string: ");
	ft_putnbr(ft_str_is_lowercase(b));
	write(1, "\n", 1);
	ft_putstr("Not lowercase string: ");
	ft_putnbr(ft_str_is_lowercase(c));
	write(1, "\n", 1);
	return (0);
}

