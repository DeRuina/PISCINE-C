/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:13:59 by druina            #+#    #+#             */
/*   Updated: 2022/08/14 10:49:39 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_recursive_power(int nb, int power)
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
	pow = pow * nb;
	return (nb * ft_recursive_power(nb,(power - 1)));
		}
	}
int	main(void)
{
	printf("%d", ft_recursive_power(5,3));
	return (0);
}

