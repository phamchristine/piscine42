/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 12:23:34 by chpham            #+#    #+#             */
/*   Updated: 2020/09/23 22:15:56 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int		ft_atoi(char *str)
{
	int i;
	int sign;
	int atoi;

	i = 0;
	sign = 1;
	atoi = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
				|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = (atoi * 10) + (str[i] - 48);
		i++;
	}
	atoi = atoi * sign;
	return (atoi);
}

#include <stdio.h>

int		main(void)
{
	char a[] = "             +-++-+++-4253";
	printf("%d", ft_atoi(a));
}
