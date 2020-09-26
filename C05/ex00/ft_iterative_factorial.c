/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 12:18:06 by chpham            #+#    #+#             */
/*   Updated: 2020/09/26 13:51:05 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	long result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while ( i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

#include <stdio.h>

int		main(void)
{
	printf("%d", ft_iterative_factorial(12));
	return (0);
}
