/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 15:37:28 by chpham            #+#    #+#             */
/*   Updated: 2020/09/18 12:05:15 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src,unsigned int n)
{
	unsigned int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <string.h>
int		main(void)
{
	int i = -3;
	char a[] = "Helloooo";
	char b[] = "HEl";
	printf("%s", ft_strncpy(a, b, i));
	printf("%s", strncpy(a, b, i));
	return (0);
}
