/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 19:18:12 by druina            #+#    #+#             */
/*   Updated: 2022/08/13 15:16:19 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(char c)
{
	write(1, &c, 1);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int *ptr;
	int *ptr2;
	int a;
	int b;
	a = 6;
	b = 3;

	ptr = &a;
	ptr2 = &b;
	ft_div_mod(a, b, ptr, ptr2);
	display('0'+*ptr);
	display ('0'+*ptr2);
	return (0);
}
