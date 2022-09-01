/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 08:54:22 by druina            #+#    #+#             */
/*   Updated: 2022/08/13 15:14:41 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}

int	main(void)
{
	int a;
	int b;
	int *ptr;
	int *ptr2;
	a = 65;
	b = 66;
	ptr = &a;
	ptr2 = &b;
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar('\n');
	ft_swap(ptr, ptr2);
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar('\n');




}
