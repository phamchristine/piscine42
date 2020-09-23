/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 11:42:18 by chpham            #+#    #+#             */
/*   Updated: 2020/09/23 22:12:19 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_error(char *base)
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

int		space_sign(char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
				|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
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

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int neg;
	int result;

	i = space_sign(str);
	neg = 1;
	result = 0;
	if (ft_error(base) == 0)
		return (0);
	if (i < 0)
	{
		i *= -1;
		neg = -1;
	}
	while (char_in_base(base, str[i]) != -1)
	{
		result *= ft_strlen(base);
		result += char_in_base(base, str[i]);
		i++;
	}
	result *= neg;
	return (result);
}

#include <stdio.h>

int		main()
{
	printf("%d", ft_atoi_base("        +-+-11", "0123456789abcdef"));
	return (0);
}
