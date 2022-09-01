/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:54:19 by druina            #+#    #+#             */
/*   Updated: 2022/08/24 15:52:19 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>


void    ft_list_push_back(t_list **begin_list, void *data)
{
    
    t_list *current;

    
        current = (*begin_list); 
        if (current == NULL)
            (*begin_list) = ft_create_elem(data);
        else
        {
            
            while(current->next != NULL)
            {
                current = current->next;     
            }
            current->next =  ft_create_elem(data);
        }
    
    


}

int main(void)
{
    t_list *check;

     /*check = ft_create_elem("Whats up");*/
     check = NULL;

ft_list_push_back(&check, "Andreiskimg");


ft_list_push_back(&check, "Dean");

    while(check)
    {
    printf("%s\n",check->data);
        check = check->next;
    }










    return(0);
}