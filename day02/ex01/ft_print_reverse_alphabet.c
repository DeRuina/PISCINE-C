/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet-final.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:18:57 by druina            #+#    #+#             */
/*   Updated: 2022/08/11 16:22:16 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	i;

	i = 'z';
	while (i >= 'a')
	{
		ft_putchar(i);
		i--;
	}
}
