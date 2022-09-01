/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:06:35 by druina            #+#    #+#             */
/*   Updated: 2022/08/28 19:12:02 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#define BUFF_SIZE 1000000
int main(void)
{
    char  buff[BUFF_SIZE];
    int ret;
    int i;
    i = 0;
    int row;
    row = 0;
    int column;
    column  = 0;

    ret = read(0, buff, BUFF_SIZE);

    if(buff[0] != 'o' && buff[0] != 'A' && buff[0] != '/')
    {
        write(1, "DON'T BE A SMARTASS!\n", 22);
        return(0);   
    }
      else if(buff[ret-1] != 'o' && buff[ret-1] != 'A' && buff[ret-1] != '\\' && buff[ret-1] != 'C') 
    {
        write(1, "DON'T BE A SMARTASS!\n", 22);
        return(0);   
    }
    while(buff[i] != '\0')             
            {
                if(buff[i] == '\n')
                   {
                    row = i;
                   break;
                   }
                i++;
            }
            i = 0;

    while(buff[i] != '\0')         
    {
        if(buff[i] == '\n')
       {
            column++;
        }
        i++;
    }

    if(buff[0] == 'o')
        {
            write(1, "[rush-00] [", 11);
            ft_putnbr(row);
            write(1, "] [", 3);
            ft_putnbr(column);
            write(1, "]\n", 2);
         }
    else if(buff[0] == '/')
        {
            write(1, "[rush-01] [", 11);
            ft_putnbr(row);
           write(1, "] [", 3);
            ft_putnbr(column);
            write(1, "]\n", 2);
         }

else if (row == 1 && column == 1)
 write(1, "[rush-02] [1] [1] || [rush-03] [1] [1] || [rush-04] [1] [1]\n", 61);

 else if(row == 1 && column > 1)
 {
    if (buff[ret-row-1] == 'A' )
        {
            write(1, "[rush-03] [1]  [", 17);
             ft_putnbr(column);
             write(1, "]\n", 3);
        }  
    else
    {
        write(1, "[rush-02] [1] [", 16);
        ft_putnbr(column);
        write(1, "] || [rush-04] [1] [", 21);
        ft_putnbr(column);
         write(1, "]\n", 3);
    }

 }
 
 else if(row > 1 && column == 1)
 {
    if (buff[row-1] == 'A' )
        {
            write(1, "[rush-02] [", 12);
             ft_putnbr(row);
             write(1, "] [1]\n", 7);
        }  
    else
    {
             write(1, "[rush-03] [", 12);
             ft_putnbr(row);
             write(1, "] [1] || [rush-04] [", 21);
             ft_putnbr(row);
             write(1, "] [1]\n", 7);
    }
 }


else if (buff[0] == 'A' && buff[row-1] == 'A' && buff[ret-row-1] == 'C' && buff[ret -2] == 'C')
	{
			write(1, "[rush-02] [", 11);
			ft_putnbr(row);
			write(1, "] [", 3);
			ft_putnbr(column);
			write(1, "]\n", 2);
	}
else if (buff[0] == 'A' && buff[ret-row-1] == 'A' && buff[row-1] == 'C' && buff[ret -2] == 'C')
		{
			write(1, "[rush-03] [", 11);
			ft_putnbr(row);
			write(1, "] [", 3);
			ft_putnbr(column);
			write(1, "]\n", 2);
		}
else if (buff[0] == 'A' && buff[ret -2] == 'A' && buff[row-1] == 'C' && buff[ret-row-1] == 'C')
		{
			write(1, "[rush-04] [", 11);
			ft_putnbr(row);
			write(1, "] [", 3);
			ft_putnbr(column);
			write(1, "]\n", 2);
		}

    return(0);
}
