/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinne <jrinne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:23:50 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/08/14 12:07:25 by jrinne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar(47);
		}
		else if (i == x)
		{
			ft_putchar(92);
		}
		else
		{
			ft_putchar(42);
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
		if (i == 1)
		{
			ft_putchar(92);
		}
		else if (i == x)
		{
			ft_putchar(47);
		}
		else
		{
			ft_putchar(42);
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
				ft_putchar(42);
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
