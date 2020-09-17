/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 20:25:21 by chpham            #+#    #+#             */
/*   Updated: 2020/09/14 21:42:32 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (j <= size)
	{
		while (i <= size - 2)
		{	
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		j++;
		i = 0;
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
	int	tab[] = {5, -10, 0, 0, 5, 7};
	ft_sort_int_tab(tab, 6);
}
