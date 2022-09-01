/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:04:02 by druina            #+#    #+#             */
/*   Updated: 2022/08/18 10:59:12 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
	{
		return (0);
	}
result = malloc(sizeof(int) * (max - min));
	if (!result)
	{
		return (0);
	}
i = 0;
	while (i < (max - min))
	{
		result[i] = (min + i);
		i++;
	}
	return (result);
}
