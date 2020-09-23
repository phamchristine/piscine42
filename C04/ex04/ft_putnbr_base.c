/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 17:33:09 by chpham            #+#    #+#             */
/*   Updated: 2020/09/23 22:06:31 by chpham           ###   ########.fr       */
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
	if (base[1] == '\0' || base[0] == '\0')
			return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int num;
	int i;

	num = nbr;
	i = 0;
	if (ft_error(base) == 1)
	{
		if (num < 0)
		{
			ft_putchar('-');
			num = -num;
		}
		if (num >= ft_strlen(base))
		{
			ft_putnbr_base(num / ft_strlen(base), base);
		}
		ft_putchar(base[num % ft_strlen(base)]);
	}
}

#include <stdio.h>

int		main()
{
	char base[] = "";
	ft_putnbr_base(42, base);
	return(0);
}
