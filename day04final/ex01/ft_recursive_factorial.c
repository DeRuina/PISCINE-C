/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 19:34:55 by druina            #+#    #+#             */
/*   Updated: 2022/08/13 20:30:11 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

		result = nb;
	if (nb > 12 || nb < 0)
	{
		return (0);
	}	
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
				result = result * (nb - 1);
		return (nb * ft_recursive_factorial(nb - 1));
	}
