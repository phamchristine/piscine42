/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 14:54:29 by chpham            #+#    #+#             */
/*   Updated: 2020/10/01 15:13:07 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;
	
	i = 0;
	size = (max > min) ? max - min : min - max;
	if (!(*range = malloc(sizeof(int) * (max - min))))
		return (NULL);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

#include <stdio.h>

int		main(void)
{
	int min = 2000;
	int max = 200;
	int i = 0;
	int *range;
	printf("%d\n", ft_ultimate_range(&range, min, max));
	printf("%p\n", range);
	while (i < max - min)
		printf("%d, ", range[i++]);
}
