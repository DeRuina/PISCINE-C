/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:04:02 by druina            #+#    #+#             */
/*   Updated: 2022/08/19 19:07:55 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>




int	*ft_range(int min, int max)
{
 int *result;

 if (min >= max)
 {
	return (0);
 }

 result = malloc(sizeof(int) * (max - min));

if(!result)
{
	return(0);
}

 int i;

 i = 0;
 while (i < (max - min ))
 {
	result[i] = (min + i);  
	 i++;
 }
	return (result);
}

int	main(void)
{
	int *test;

	test = ft_range(10, 20);	
	
	int i;

	i = 0;
	while (i < 10)
	{
	printf("%i", test[i]);
	i++;
	}
}
