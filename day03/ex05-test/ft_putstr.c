/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:03:54 by druina            #+#    #+#             */
/*   Updated: 2022/08/13 15:27:50 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)
{
	write (1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i;
	
	i =  0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}

}

int		main(void)
{
	char *str = "Dean Ruina";
	ft_putstr(str);
	return (0);
}
