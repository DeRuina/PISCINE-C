/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:56:19 by druina            #+#    #+#             */
/*   Updated: 2022/08/26 12:14:56 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putnbr (int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		putnbr(147483648);
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		putnbr(nb);
	}
	else  (nb >= 10)
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
	return ('0' + nb)
}