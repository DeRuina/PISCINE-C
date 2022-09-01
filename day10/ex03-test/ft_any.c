/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:12:49 by druina            #+#    #+#             */
/*   Updated: 2022/08/22 16:45:19 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int check(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == 'a')
			return(1);
		i++;
	}
	return(0);
}

int	ft_any(char **tab, int(*f)(char*))
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		if(f(tab[i]) == 1)
			return (1);
		i++;
	}
	return(0);
}


int main(void)
{
  char *str[2];
 	str[0] = "Dean the kimg";
	str[1] = "Andre is king";	

	printf("%d",ft_any(str, check));


return (0);
}
