/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:26:53 by druina            #+#    #+#             */
/*   Updated: 2022/08/17 16:53:40 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *str, char *str2)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str2[i] != '\0')
	{
		if(str[i] != str2[i])
		{
			return(str[i] - str2[i])
		}
		
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	

	return(0);
}
