/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:36:49 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 22:55:51 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**malloc_char(int y, int x)
{
	int		j;
	char	**result;

	j = 0;
	result = (char **)malloc(sizeof(char *) * y);
	while (j < y)
	{
		result[j] = (char *)malloc(sizeof(char) * x);
		j++;
	}
	return (result);
}

char	**generate_arr(char *str, int y, int x, int beginmap)
{
	int		i;
	int		j;
	int		k;
	char	**result;

	i = 0;
	j = beginmap + 1;
	k = 0;
	result = malloc_char(y, x);
	while (i < y - 1)
	{
		while (str[j] != '\n')
		{
			result[i][k] = str[j];
			j++;
			k++;
		}
		k = 0;
		j++;
		i++;
	}
	return (result);
}
