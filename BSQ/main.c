/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:46:35 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 23:25:09 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int		buff_size;
	char	*buff;

	buff_size = 8;
	buff = malloc(sizeof(char *));
	if (argc == 1)
		read_input(buff, buff_size);
	else
	{
		read_argv(buff, buff_size, argc, argv);
	}
	return (0);
}
