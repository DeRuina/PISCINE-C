/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 22:36:37 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 22:57:21 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void	read_input(char *buff, int buff_size)
{
	int		i;
	char	c;

	i = 0;
	while ((read(0, &c, 1)))
	{
		buff[i++] = c;
		if (i >= buff_size)
		{
			buff_size *= 2;
			buff = ft_realloc(buff, buff_size);
		}
	}
	buff[i + 1] = '\0';
	calc(buff);
}
