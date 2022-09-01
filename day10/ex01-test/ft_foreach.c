/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:10:10 by druina            #+#    #+#             */
/*   Updated: 2022/08/22 15:19:54 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb == -2147483648)
	{
		ft_putchar(50);
		nb = 147483648;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(48 + (nb % 10));
}


void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;

	while (i < length)
	{
		f(tab[i]);
		i++;
	}

}

int main(void)
{

	int tab[4];
	tab[0] = 13;
	tab[1] = 6;
	tab[2] = 87;
	tab[3] = 2;
	ft_foreach(tab, 4, &ft_putnbr);



	return(0);
}
