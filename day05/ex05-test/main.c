/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:56:19 by druina            #+#    #+#             */
/*   Updated: 2022/08/17 12:24:14 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char *c)
{
	write(1, c, 1);
}


char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	ptr[] =  "ariel";
	char	ptr1[] = "el";
	
	

	
	
	printf("%s", ft_strstr(ptr, ptr1));
	printf("\n");
	 char ptr2[] = "ariel";
	char ptr3[] = "el";
	printf("\n");
	printf("%s", strstr(ptr2, ptr3));
	return (0);
}
