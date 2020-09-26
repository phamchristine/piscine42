/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 19:33:30 by chpham            #+#    #+#             */
/*   Updated: 2020/09/26 15:30:56 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < ( nb / i) && i < 46341)
		i++;
	if (nb == (i *  i))
		return (i);
	return (0);
}

#include <stdio.h>

int main ()
{
	printf("%d", ft_sqrt(10000));
}
