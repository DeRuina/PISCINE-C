/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:30:10 by druina            #+#    #+#             */
/*   Updated: 2022/08/23 12:14:31 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

void	calc(char *str, int a, int b)
{
	if (ft_strcmp(str, "+") == 0)
		ft_putnbr(a + b);
	else if (ft_strcmp(str, "-") == 0)
		ft_putnbr(a - b);
	else if (ft_strcmp(str, "*") == 0)
		ft_putnbr(a * b);
	else if (ft_strcmp(str, "/") == 0)
	{
		if (b == 0)
			write(1, "Stop : division by zero\n", 24);
		else
			ft_putnbr(a / b);
	}
	else if (ft_strcmp(str, "%") == 0)
	{
		if (b == 0)
			write(1, "Stop : modulo by zero\n", 22);
		else
			ft_putnbr(a % b);
	}
}
