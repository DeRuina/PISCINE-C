/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:04:01 by druina            #+#    #+#             */
/*   Updated: 2022/08/22 18:29:12 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int check(char *str)
{
	int i;

	i = 0;
	while (i < 2 )
	{
		if(str[i] == 'a')
			return(1);
		i++;
	}
	return(0);
}

int	ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int count;

	count = 0;
	i = 0;
	while(tab[i] != '\0')
	{
		if(f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

int main(void)
{
  char *str[2];
  
 	str[0] = "Dean the kimg";
	str[1] = "Andre is a king";	

	printf("%d",ft_count_if(str, &check));


return (0);
}
