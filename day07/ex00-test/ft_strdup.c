/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:34:37 by druina            #+#    #+#             */
/*   Updated: 2022/08/19 19:04:50 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>

int	ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	return (i -1);
}

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return(dest);
}

char	*ft_strdup(char *src)
{
	char *dest;
 	dest =(char *)malloc(sizeof(*src) * (ft_len(src) +1)); 
	ft_strcpy(dest, src);
	return(dest);


}

int	main(void)
{
	char *ptr = "Dean 234234 the king";
   printf("%s",ft_strdup(ptr));



	return(0);
}
