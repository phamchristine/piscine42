/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 11:17:01 by chpham            #+#    #+#             */
/*   Updated: 2020/09/17 12:34:41 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
		dest[i + j] = src[j];
	printf("Saluuu");
	return (dest);
}

int		main(void)
{
	char a[] = "Hello";
	char b[] = "";
	int c = 0;

	printf("%s", ft_strncat(a, b, c));
	return (0);
}
