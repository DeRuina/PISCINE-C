/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:56:19 by druina            #+#    #+#             */
/*   Updated: 2022/08/16 13:25:07 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	ptr[] = "Dean the king 1";
	char	ptr1[] = "DEAN THE KING";

	
	printf("%s", ft_strcpy(ptr1, ptr));
	printf("\n");
	char	ptr2[] = "Dean the king 1";
	char	ptr3[] = "DEAN THE KING";

	printf("%s", strcpy(ptr3, ptr2));
	return (0);
}
