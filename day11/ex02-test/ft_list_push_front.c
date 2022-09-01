/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:11:26 by druina            #+#    #+#             */
/*   Updated: 2022/08/25 10:40:05 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *current;
    current = (*begin_list);
    if(current == NULL)
        (*begin_list) = ft_create_elem(data);
    else
    {
        current = ft_create_elem(data);
       (*begin_list)->next = current;
        

    }



}

int main(void)
{
    t_list *check;

     
     check = NULL;





ft_list_push_front(&check, "Dean");

    while(check)
    {
    printf("%s\n",check->data);
        check = check->next;
    }
    return(0);
}
