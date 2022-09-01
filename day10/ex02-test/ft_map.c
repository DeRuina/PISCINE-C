/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:35:17 by druina            #+#    #+#             */
/*   Updated: 2022/08/22 16:01:47 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	add(int nb)
{
	int result;
	result = nb + 10;
	return (result);
}
int	*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *ptr;
	ptr = malloc(sizeof(int*) * length);

	i = 0;
	while (i < length)
	{
		ptr[i] = f(tab[i]);
		i++;
	}

	return(ptr);
}

int main(void)
{

	int *str;
	int tab[4];
	tab[0] = 13;
	tab[1] = 6;
	tab[2] = 87;
	tab[3] = 2;
	str = ft_map(tab, 4, add);

	int i;

	i = 0;
	while(i < 4)
	{
		printf("%d", str[i]);
		i++;
	}



	return(0);
}