/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 20:45:20 by chpham            #+#    #+#             */
/*   Updated: 2020/09/29 18:17:05 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		check_base(char *base);
int		ft_strlen(char *base);
int		ft_atoi_base(char *nbr, char *base_from);

char	*ft_rev_int_tab(char *tab, int size)
{
	int		i;
	char	tmp;

	i = 0;
	if (size == 0)
		size++;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
	tab[size] = '\0';
	return (tab);
}

char	*ft_putnbr_base(int nb, char *base, char *tab)
{
	int				size_base;
	int				count;
	int				neg;
	unsigned int	nbr;

	neg = 1;
	count = 0;
	size_base = ft_strlen(base);
	nbr = nb;
	if (nb < 0)
	{
		neg = -1;
		nbr = -nb;
	}
	if (nbr == 0)
		tab[count] = base[nbr % size_base];
	while (nbr)
	{
		tab[count++] = base[nbr % size_base];
		nbr /= size_base;
	}
	if (neg < 0)
		tab[count++] = '-';
	return (ft_rev_int_tab(tab, count));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		result_int;
	char	*result_str;

	if (!(result_str = malloc(20 * sizeof(char))))
		return (NULL);
	if (check_base(base_from) == 0)
		return (NULL);
	if (check_base(base_to) == 0)
		return (NULL);
	else
	{
		result_int = ft_atoi_base(nbr, base_from);
		result_str = ft_putnbr_base(result_int, base_to, result_str);
	}
	return (result_str);
}

/*
int		main(void)
{
	char *test;
	test = ft_convert_base(" 	--+-568  d", "0123456789", "01");
	printf("%s\n", test);
}*/
