/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 20:10:15 by druina            #+#    #+#             */
/*   Updated: 2022/08/13 15:24:21 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(char c)
{
	write(1, &c, 1);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
}

int	main(void)
{
	int *ptr;
	int *ptr2;
	int a;
	int b;

	a = 10;
	b = 3;

	ptr = &a;
	ptr2 = &b;
	ft_ultimate_div_mod(ptr, ptr2);
	display('0' + *ptr);
	display('0' + *ptr2);
	return (0);
}
