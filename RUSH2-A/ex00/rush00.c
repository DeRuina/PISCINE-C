/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:01:55 by jrinne            #+#    #+#             */
/*   Updated: 2022/08/27 14:07:29 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	first_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar(111);
		}
		else
		{
			ft_putchar(45);
		}
		i++;
	}
}

void	middle_line(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j <= y - 2)
	{
		while (i <= x)
		{
			if (i == 1 || i == x)
			{
				ft_putchar(124);
			}
			else
			{
				ft_putchar(32);
			}
			i++;
		}
		i = 1;
		j++;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (x > 0 && y > 0)
		{
			first_line(x);
			ft_putchar('\n');
			middle_line(x, y);
			if (y >= 2)
			{
				first_line(x);
				ft_putchar('\n');
			}
		}
	}
}
