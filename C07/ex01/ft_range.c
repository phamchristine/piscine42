/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 11:37:21 by chpham            #+#    #+#             */
/*   Updated: 2020/09/27 16:16:58 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (!(tab = malloc(sizeof(int) *(max - min))))
		return (0);
	if (min >= max)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return(tab);
}

int	main()
{
	int min = -100;
	int max = -20;
	int i = 0;
	int *table;
	table = ft_range(min, max);
	printf("%p\n", table);
	while (i < max - min)
		printf("%d, ", table[i++]);
}

