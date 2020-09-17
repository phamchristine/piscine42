/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_strncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 18:12:49 by chpham            #+#    #+#             */
/*   Updated: 2020/09/16 22:48:37 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (i == 0)
		return(0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
		i++;
	return ((unsigned char)(s1[i]) - ((unsigned char)s2[i]));
}

int		main(void)
{
	unsigned int c = -2;
	char a[] = "idkvvv";
	char b[] = "mmm";
	printf("%d", ft_strncmp(a, b, c));
	return (0);
}
