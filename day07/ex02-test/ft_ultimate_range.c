/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:24:29 by druina            #+#    #+#             */
/*   Updated: 2022/08/19 19:11:10 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	   
	int i;
	int *arr;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = malloc(sizeof(int*) * (max - min)); 
	if (!arr)
	{
		*range = 0;
		return (0);
	}
    *range = arr;
	while (i < (max-min))
	{
	arr[i] = (min +i);
	printf("%d", arr[i]);
	i++;
	}
  return (i);
}

int main(void)

{
 int *ptr;
 int arr[10];
 ptr = arr;
 int answer;

 answer = ft_ultimate_range(&ptr, 5, 9);
 
 int i;

 i = 0;
 printf("%d",answer);

 }
