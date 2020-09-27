/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:11:30 by chpham            #+#    #+#             */
/*   Updated: 2020/09/27 20:42:26 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		size_strs(char **strs, int size)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (i < size)
	{
		result += ft_strlen(strs[i]);
		i++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		result;

	i = 1;
	if (size == 0)
	{
		if (!(str = malloc(1)))
			return (0);
		str[0] = '\0';
		return (str);
	}
	result = size_strs(strs, size);
	if (!(str = malloc((sizeof(char)) * result + ft_strlen(sep) * (size - 1))))
		return (0);
	ft_strcpy(str, strs[0]);
	while (i < size)
	{
		ft_strcat(str, sep);
		ft_strcat(str, strs[i]);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int		main(void)
{
	char *strs[] = {"hi", "hey", "hello,", "Chris", "it's", "nice", "to", "meet", "you."};
	char *sep = " ";
	printf("%s", ft_strjoin(9, strs, sep));
}*/
