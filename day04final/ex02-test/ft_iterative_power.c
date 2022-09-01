/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 20:32:39 by druina            #+#    #+#             */
/*   Updated: 2022/08/14 10:47:10 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	pow;
	int	i;

	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
	i = 1;
	pow = nb;
		while (i < power)
		{
		pow = pow * nb;
		i++;
		}
		return (pow);
	}
}

int	main(void)
{
	printf("%d", ft_iterative_power(3,7));
	return (0);
}
