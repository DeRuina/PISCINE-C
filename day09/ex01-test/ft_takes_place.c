/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:20:36 by druina            #+#    #+#             */
/*   Updated: 2022/08/20 10:34:14 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 23)
	{
		printf("%d.00 P.M AND %d%d.00 A.M.", 23, 0, 0);
	}
	else if (hour > 12)
	{
		hour = (hour - 12);
		printf("%d.00 P.M AND %d.00 P.M.", hour, (hour + 1));
	}
	else if (hour == 11)
	{
		printf("%d.00 A.M AND %d.00 P.M.", 11, 12);
	}
	else if (hour == 0)
	{
		printf("%d%d.00 A.M AND %d.00 A.M.", 0, hour, (hour + 1));
	}
	else
	{
		printf("%d.00 A.M AND %d.00 A.M.", hour, (hour + 1));
	}
}

int	main(void)
{
	
	ft_takes_place(21);
	return (0);
}
