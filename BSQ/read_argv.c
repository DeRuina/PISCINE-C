/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_argv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 23:05:46 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 23:28:46 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void	read_argv(char *buff, int buff_size, int argc, char **argv)
{
	int		i;
	char	c;
	int		j;
	int		fd;

	i = 0;
	j = 1;
	while (j < argc)
	{
		fd = open(argv[j], O_RDONLY);
				i = 0;
		while ((read(fd, &c, 1)))
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
		j++;
		write(1, "\n", 1);
	}
}
