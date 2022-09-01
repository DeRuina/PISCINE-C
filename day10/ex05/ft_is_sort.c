/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:01:59 by druina            #+#    #+#             */
/*   Updated: 2022/08/23 16:52:38 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	answer;

	i = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) < 0 || f(tab[i - 1], tab[i]) == 0)
		{
			answer = 1;
		}
		else if (f(tab[i - 1], tab[i]) > 0)
		{
			answer = 0;
			return (answer);
		}			
		i++;
	}
	return (answer);
}
