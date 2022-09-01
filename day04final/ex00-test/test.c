/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:13:56 by druina            #+#    #+#             */
/*   Updated: 2022/08/14 09:58:39 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	display(char c)
{
	write(1, &c, 1);
}

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		while (nb > 1)
		{
			result = result * (nb - 1);
			nb--;
		}
	}
	return (result);
}
int 	main(void)
{
	int	check;
	check = ft_iterative_factorial(4);
	printf("%d" , check);
	return (0);
}
