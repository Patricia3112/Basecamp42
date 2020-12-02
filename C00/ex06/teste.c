/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:46:18 by psilva-f          #+#    #+#             */
/*   Updated: 2020/12/01 16:48:40 by psilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_comb2(void)
{
    char num1;
    char num2;

    num1 = -1;
    while (++num1 < 100)
    {
    	num2 = num1;
        while (++num2 < 100)
        {
            ft_putchar(num1 / 10 + '0');
            ft_putchar(num1 % 10 + '0');
            ft_putchar(' ');
            ft_putchar(num2 / 10 + '0');
            ft_putchar(num2 % 10 + '0');
            if (num1 < 98)
            {
                write(1, ", ", 2);
            }
        }
    }
}
