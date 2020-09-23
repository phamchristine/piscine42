/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 15:00:10 by chpham            #+#    #+#             */
/*   Updated: 2020/09/22 11:15:33 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(unsigned char c)
{
	char *base;

	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] >= 32 && (unsigned char)str[i] < 127)
			ft_putchar(str[i]);
		else if ((unsigned char)str[i] < 32 || (unsigned char)str[i] >= 127)
			ft_print_hexa(str[i]);
		i++;
	}
}

#include <limits.h>


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

int		main(void)
{
	char	*a = "Coucou\ntu vas bien ?";
	char	b[] = {12, 127, 250, 254, 255, 0};

	ft_putstr_non_printable(a);
	write(1, "\n", 1);
	ft_putstr_non_printable(b);
	write(1, "\n", 1);
	ft_putnbr(b[2]);
	return (0);
}

