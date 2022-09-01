/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:50:50 by druina            #+#    #+#             */
/*   Updated: 2022/08/25 10:29:09 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
    t_list *temp;
    temp = begin_list;

    if(temp == NULL)
    return( NULL);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return(temp);
}
int main(void)
{

    t_list *check;
    t_list *check2;
    t_list *check3;
    
    t_list *answer;

    check = NULL;
    check = ft_create_elem("HELLO");
    check3 = ft_create_elem("ANDRE");
    check2 = ft_create_elem("Dean");
    check->next = check3;
    check3->next = check2;
    answer = ft_list_last(check);
   
    printf("%s",answer->data);


    return(0);
}
