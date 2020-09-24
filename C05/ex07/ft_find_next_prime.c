/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:02:41 by chpham            #+#    #+#             */
/*   Updated: 2020/09/24 12:48:56 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2147483647)
		return (1);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (ft_is_prime(nb) == 1)
	{
		if (!(ft_is_prime(nb + i)))
			i++;
	}
	return (nb + i);
}

#include <stdio.h>

int		main(void)
{
	printf("%d", ft_find_next_prime(36551909));
}
