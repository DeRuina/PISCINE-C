/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:55:37 by druina            #+#    #+#             */
/*   Updated: 2022/08/24 21:36:03 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list *ft_list_push_params(int ac, char **av)
{
    int i;
    t_list *current;

    i = ac ;
    while (i  > 1 )
    {
        
       current = ft_create_elem(av[i]); 
        current->next = ft_create_elem(av[i-1]); 
        printf("%s\n", current->data);
        i--;
    }

    return(current);
}


int main(int argc, char **argv)
{
    
    int i;

    i = 1;
   
    
        printf("%s",ft_list_push_params(argc,argv)->data);

   



    return (0);
}