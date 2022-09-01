/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:17:56 by druina            #+#    #+#             */
/*   Updated: 2022/08/18 18:48:07 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	strlen1(char *str)
 {
	 int i;

	 i = 0;
	while (str[i] != '\0')
	   i++;
	return (i);	
 }

char *ft_concat_params(int argc, char **argv)
{
	int i;
	int j;
	int k;
	char *str;
	int lenght;

	i = 0;	
	while (i <= argc)
	{
	  lenght = lenght + strlen1(argv[i]);
		i++;
	}
	str = malloc(sizeof(char) * lenght);  

	i = 0;
	j = 0;
	k = 0;


	while(i < (lenght + argc))
	{
	while (argv[i][j] != '\0')
	{
			
	 str[k] = argv[i][j];
	 if (argv[i][j] + 1 == '\0')
	 {
		str[k] = '\n';
	 }
	 k++;
	 j++;
	}
	j = 0;
	i++;
	}

	return (str);
}

int	main(int argc, char **argv)
{

	printf("%s", ft_concat_params(argc,argv));

return (0);
}
