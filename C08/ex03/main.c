/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpham <chpham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:16:53 by chpham            #+#    #+#             */
/*   Updated: 2020/10/26 15:16:53 by chpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void    set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int     main(void)
{
    t_point     point;

    set_point(&point);
    return (0);
}