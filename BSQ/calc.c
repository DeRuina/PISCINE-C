/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 22:14:20 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 23:02:33 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	calc(char *buff)
{
	char	**arr;
	int		**arr2;
	int		beginmap;
	int		line;
	int		row;

	line = 0;
	row = 0;
	beginmap = begin_map(buff);
	row = row_count(buff);
	line = line_count(buff);
	if (checkmap(buff, beginmap) == -1)
		return (-1);
	arr = generate_arr(buff, line, row, beginmap);
	arr2 = zero_one(arr, line - 1, row);
	maximal_square(arr2, line - 1, row);
	return (0);
}
