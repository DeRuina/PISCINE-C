/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:56:19 by druina            #+#    #+#             */
/*   Updated: 2022/08/17 12:10:31 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c);
int		ft_atoi(char *str);
void	output(char *str);

int	main(void)
{
	char	*ptr;

	ptr = "12ab4";
	printf("%d", atoi(ptr));
	printf("\n");
	printf("%d", ft_atoi(ptr));
	return (0);
}
