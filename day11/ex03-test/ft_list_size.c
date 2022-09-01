/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:04:54 by druina            #+#    #+#             */
/*   Updated: 2022/08/24 18:40:13 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int ft_list_size(t_list *begin_list)
{
    int count;
    
    count = 0;
    while(begin_list != NULL)
    {
        begin_list = begin_list->next;
        count++;
    }
    return (count);    
}

int main(void)
{

    t_list *check;
    t_list *check2;
    t_list *check3;

    check = ft_create_elem("HELLO");
    check2 = ft_create_elem("DEAN");
    check3 = ft_create_elem("DEAN");
    check->next = check3;
    check3->next = check2;
    printf("%d",ft_list_size(check));


    return(0);
}