/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:28:43 by druina            #+#    #+#             */
/*   Updated: 2022/08/11 19:28:02 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb(void)
{
	int	i, j, k;
	int count, count2, count3;
	i = 48;
   	j = 49;
	k = 50;
	count = 0;
	count2 = 1;
    count3 = 1;
   if (i <= j) {
    while (
	   if (j <= k )
	{
	   	while (count < 9){
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	count++;
	k++;
		}
	
   }
}
	
int	main(void)
{
	ft_print_comb();
	return (0);
}

