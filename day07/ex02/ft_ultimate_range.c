/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:24:29 by druina            #+#    #+#             */
/*   Updated: 2022/08/18 16:09:24 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = malloc(sizeof(int *) * (max - min));
	if (!arr)
	{
		*range = 0;
		return (0);
	}
	*range = arr;
	while (i < (max - min))
	{
	arr[i] = (min + i);
	i++;
	}
	return (i);
}
