/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinne <jrinne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:10:35 by jrinne            #+#    #+#             */
/*   Updated: 2022/08/14 12:14:52 by jrinne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar(65);
		}
		else
		{
			ft_putchar(66);
		}
		i++;
	}
}

void	last_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar(67);
		}
		else
		{
			ft_putchar(66);
		}
		i++;
	}
}

void	middle_line(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j <= y - 2)
	{
		while (i <= x)
		{
			if (i == 1 || i == x)
			{
				ft_putchar(66);
			}
			else
			{
				ft_putchar(32);
			}
			i++;
		}
		i = 1;
		j++;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	first_line(x);
	ft_putchar('\n');
	middle_line(x, y);
	if (y >= 2)
	{
		last_line(x);
		ft_putchar('\n');
	}
}
