/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:56:19 by druina            #+#    #+#             */
/*   Updated: 2022/08/17 12:15:58 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	ptr[] = "JUNI BUBI";
	char	ptr1[] = "DEAN sdasdasda";
	
	

	
	
	printf("%s", ft_strncpy(ptr1, ptr, 9));
	printf("\n");
	 char ptr2[] = "JUNI BUBI";
	char ptr3[] = "DEAN sdfdeasdasd";
	printf("%s", strncpy(ptr3, ptr2, 9));
	return (0);
}
