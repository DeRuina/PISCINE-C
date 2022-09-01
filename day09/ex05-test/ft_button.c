/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:18:44 by druina            #+#    #+#             */
/*   Updated: 2022/08/20 10:36:25 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_button(int i, int j, int k)
{
   	if ((i <= j && j <= k) || (k <= j && j <= i))
	return (j);
	else if((j <= i && i <= k) || (k <= i &&  i <= j))
	return (i);
	else if ((i <= k && k <= j) || (j <= k && k <= i))
	return (k);
	else
	return (0);	
 

}
int main(void)
{
	printf("%d", ft_button(4, 9, 7));
return (0);
}
