/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_strncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 18:12:49 by chpham            #+#    #+#             */
/*   Updated: 2020/09/17 21:09:12 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)(s1[i]) - ((unsigned char)s2[i]));
}

int		main(void)
{
	unsigned int c = 4;
	char a[] = "bonjour";
	char b[] = "bontoi";
	printf("%d", ft_strncmp(a, b, c));
}
