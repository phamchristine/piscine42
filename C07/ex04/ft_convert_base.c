/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 20:45:01 by chpham            #+#    #+#             */
/*   Updated: 2020/09/29 10:19:33 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '\t' || base[i] == '\n' || base[i] == '\v' ||
				base[i] == '\f' || base[i] == '\r' || base[i] == ' ' ||
				base[i] == '+' || base[i] == '-')
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
	if (i <= 1)
		return (0);
	return (1);
}

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int		space_sign(char *nbr)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while (nbr[i] == ' ' || nbr[i] == '\n' || nbr[i] == '\t'
				|| nbr[i] == '\v' || nbr[i] == '\f' || nbr[i] == '\r')
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign *= (-1);
		i++;
	}
	i *= sign;
	return (i);
}

int		char_in_base(char *base, char c)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *nbr, char *base_from)
{
	int i;
	int neg;
	int result;

	i = space_sign(nbr);
	neg = 1;
	result = 0;
	if (check_base(base_from) == 0)
		return (0);
	if (i < 0)
	{
		i *= -1;
		neg = -1;
	}
	while (char_in_base(base_from, nbr[i]) != -1)
	{
		result *= ft_strlen(base_from);
		result += char_in_base(base_from, nbr[i]);
		i++;
	}
	result *= neg;
	return (result);
}
