/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:39:55 by druina            #+#    #+#             */
/*   Updated: 2022/08/19 10:57:37 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int	i;
	int	max;

	max = tab[0];
	i = 0;
	while (i < length)
	{
		if (tab[i + 1] >= max)
		max = tab[i + 1];
		i++;
	}
	return (max);
}
