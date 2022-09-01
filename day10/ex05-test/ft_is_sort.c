/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:01:59 by druina            #+#    #+#             */
/*   Updated: 2022/08/24 11:12:22 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int check(int a, int b)
{
 if (a < b)
	 return (-1);
  else if (a == b)
	 return (0);
	else
		return(1);

}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int answer;

	i = 1;
	while (i < length)
	{
		if(f(tab[i-1], tab[i]) < 0 || f(tab[i-1], tab[i]) == 0)
		{
			answer = 1;
		}
		else if(f(tab[i-1], tab[i]) > 0)
		{
			answer = 0;
			return (answer);
		}	
				
		i++;
	}
  return (answer);
}

int main(void)
{

int tab[0];






int i;

i = 0;


	printf("%d\n", ft_is_sort(tab, 0, &check));

return(0);
}
