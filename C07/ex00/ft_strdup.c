/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 22:53:54 by chpham            #+#    #+#             */
/*   Updated: 2020/09/27 11:48:07 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *new;
	int i;

	i = 0;
	if(!(new = malloc(sizeof(src))))
		return (0);
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

#include <stdio.h>

int		main(void)
{
	char *a;

	a = "Hello";
	printf("%s", ft_strdup(a));
	return (0);
}
