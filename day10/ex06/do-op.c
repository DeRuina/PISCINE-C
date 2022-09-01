/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:15:01 by druina            #+#    #+#             */
/*   Updated: 2022/08/23 12:46:55 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		a;
	int		b;

	if (argc != 4)
		return (0);
	if (!ft_atoi(argv[1]) && !ft_atoi(argv[3]))
	{
		ft_putchar('0');
		return (0);
	}
	if (ft_strcmp(argv[2], "+") != 0 && ft_strcmp(argv[2], "-") != 0)
	{
		if (ft_strcmp(argv[2], "*") != 0 && ft_strcmp(argv[2], "/") != 0)
		{
			if (ft_strcmp(argv[2], "%") != 0)
			{
				ft_putchar('0');
				return (0);
			}
		}
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	calc(argv[2], a, b);
	return (0);
}
