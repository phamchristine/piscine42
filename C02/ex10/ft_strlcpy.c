/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:50:39 by chpham            #+#    #+#             */
/*   Updated: 2020/09/18 12:01:42 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
   
	i = 0;
	while(src[i])
		i++;
	if (size > '\0')
	{
		while (src[i] && i < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (i);
	}
	if (size == '\0')
		return (i);
	return (i);
}

int		main(void)
{
	int i = 15;
	char a[] = "Hello";
	char b[] = "Comment ca va";
	printf("%u", ft_strlcpy(a, b, i));
	return (0);
}
