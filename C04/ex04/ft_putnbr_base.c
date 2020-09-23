/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 17:33:09 by chpham            #+#    #+#             */
/*   Updated: 2020/09/23 12:28:29 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int		ft_error(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] <= 1)
			return (1);
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int num;
	int i;

	num = nbr;
	i = 0;
	if (ft_error(base) == 0)
	{
		if (num < 0)
		{
			ft_putchar('-');
			num = -num;
		}
		if (num >= 10)
		{
			ft_putnbr_base(num / ft_strlen(base), base);
		}
		ft_putchar(base[num % ft_strlen(base)]);
	}
}

#include <stdio.h>

int		main()
{
	char base[] = "01";
	ft_putnbr_base(2147483647, base);
	return(0);
}
