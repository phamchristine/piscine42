/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 15:00:10 by chpham            #+#    #+#             */
/*   Updated: 2020/09/16 14:15:47 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
		if ((unsigned char)str[i] > 31 && (unsigned char)str[i] < 127)
			ft_putchar(str[i]);
		else if ((unsigned char)str[i] < 32 || (unsigned char)str[i] > 126)
			ft_print_hexa(str[i]);
		i++;
	}
}

int		main(void)
{
	char a[]  = "ØŒ®çnM";
	ft_putstr_non_printable(a);
	return (0);
}
