/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:21:31 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/08/28 17:56:56 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "DON'T BE A SMARTASS!\n", 22);
	else if (!ft_atoi(argv[1]) || !ft_atoi(argv[2]))
		write(1, "DON'T BE A SMARTASS!\n", 22);
	else
	{
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));

	}
	return (0);
}
