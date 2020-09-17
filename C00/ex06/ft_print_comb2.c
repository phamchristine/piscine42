/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 11:07:29 by chpham            #+#    #+#             */
/*   Updated: 2020/09/10 17:01:34 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int c1;
	int c2;

	c1 = 0;
	c2 = 1;
	while (c1 <= 98)
	{
		c2 = c1 + 1;
		while (c2 <= 99)
		{
			ft_putchar(c1 / 10 + '0');
			ft_putchar(c1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(c2 / 10 + '0');
			ft_putchar(c2 % 10 + '0');
			if (c1 < 98 || c2 < 99)
				write(1, ", ", 2);
			c2++;
		}
		c1++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
