/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 20:45:20 by chpham            #+#    #+#             */
/*   Updated: 2020/09/30 08:33:27 by chpham           ###   ########.fr       */
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

char	*ft_putnbr_base_bis(int nb, int size_base, char *tab, char *base)
{
	int				count;
	int				neg;
	unsigned int	nbr;

	count = 0;
	(nb < 0) ? (nbr = -nb) : (nbr = nb);
	neg = nb;
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
		count++;
	}
	while (nbr)
	{
		nbr /= size_base;
		count++;
	}
	if (!(tab = malloc(sizeof(char) * count + 1)))
		return (NULL);
	return (ft_putnbr_base_bis(nb, size_base, tab, base));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		result_int;
	char	*result_str;

	result_str = NULL;
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

int		main(void)
{
	char *test;
	test = ft_convert_base(" 	--+2544566", "0123456789", "0123456789abcdef");
	printf("%s\n", test);
}
