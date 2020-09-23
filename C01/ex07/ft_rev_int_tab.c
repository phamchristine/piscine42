/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 13:07:57 by chpham            #+#    #+#             */
/*   Updated: 2020/09/18 15:26:52 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	tmp = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}

int		main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_rev_int_tab(tab, 9);
	return (0);
}
