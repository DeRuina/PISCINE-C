/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:22:27 by druina            #+#    #+#             */
/*   Updated: 2022/08/13 15:09:36 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
	
	{
	write(1 ,&c, 1);
	}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}


int	main(void)
{
	int a;
	a = 51;
	int *ptr;

	ptr = &a;

	ft_putchar(a);
	ft_ft(ptr);
	ft_putchar(a);


	return (0);
}
