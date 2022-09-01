/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:08:45 by druina            #+#    #+#             */
/*   Updated: 2022/08/24 09:39:37 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
    t_list *element;
    element = malloc(sizeof(t_list));
    element->data = data;
    element->next = NULL;
    return (element);
}

int main(void)
{
    t_list *list;
    list = ft_create_elem("Andre the king");
    while(list)
    {
        printf("%s", list -> data);
        list = list->next;
    }

    return(0);
}