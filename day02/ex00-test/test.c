/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 20:37:01 by druina            #+#    #+#             */
/*   Updated: 2022/08/12 12:40:54 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>


int ft_putchar(char c){

	write(1, &c ,1);
    return (0);
	}


void ft_print_alphabet(void){
	char i;
	i = 'a';
	while (i<='z'){
     
		ft_putchar(i);
		i++;
}
	  
}








int main() {

	
	ft_print_alphabet();
	ft_putchar('\n');
return (0);
}
